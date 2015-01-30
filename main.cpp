/********************************************************************
Fichier: main.cpp
Auteurs: Pierre-Luc Jetté && Claire Quesnel
Date de création: 21 janvier 2015
Dernière modification: 28 janvier 2015
Description: 
	Fichier main qui contient l'exécution principale du TP1 - INF1010
	Le programme crée une forme simplifiée d'une école, contenant des
	sections, des professeurs et des étudiants. Le programme crée des 
	objets génériques, effectue sur eux quelques modifications d'attributs
	pour enfin afficher toutes les informations des objets crées à
	l'utilisateur.
********************************************************************/

#include <iostream>
#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

using namespace std;

int main()
{	
	Ecole Poly;
	Poly.setNom("Ecole Polytechnique de Montreal");
	Poly.setAdresse("2900 Boulevard Edouard-Montpetit, Montreal, Quebec, H3T 1J4");

	Ecole* Uqam = new Ecole("Universite du Quebec a Montreal", "405 Rue Sainte-Catherine Est, Montreal, Quebec H2L2C4");

	Professeur jeanMartin_Aussant;
	jeanMartin_Aussant.setNumeroEmploye("p12");
	jeanMartin_Aussant.setPrenom("Jean-Martin");
	jeanMartin_Aussant.setNom("Aussant");
	jeanMartin_Aussant.setDepartement("Departement de science economique");

	Professeur* chahira_Bechiri = new Professeur("p13", "Chahira", "Bechiri", "Departement de science informatique");

	Professeur* samuel_Kadoury = new Professeur("p14", "Samuel", "Kadoury", "Departement de genie informatique et logiciel");

	Professeur* michel_Gagnon = new Professeur("p15", "Michel", "Gagnon", "Departement de genie informatique et logiciel");

	Etudiant konstantinos_LambrouLatreille("1510301", "Konstantinos", "Lambrou-Latreille");

	Etudiant kahina_Bechiri("1475812", "Kahina", "Bechiri");

	Etudiant mathieu_Fafard("1506813", "Mathieu", "Fafard");

	Section ISF1000("ISF1000", "C215", "Economie 101", jeanMartin_Aussant);

	ISF1000.ajouterEtudiant(kahina_Bechiri);

	Section* ISF2000 = new Section("ISF2000", "C214", "Etude en science cognitive", *chahira_Bechiri);

	ISF2000->ajouterEtudiant(konstantinos_LambrouLatreille);
	ISF2000->ajouterEtudiant(kahina_Bechiri);

	Section INF1010("INF1010", "L6614", "Programmation Orientee-Objet", *samuel_Kadoury);

	INF1010.ajouterEtudiant(konstantinos_LambrouLatreille);
	INF1010.ajouterEtudiant(mathieu_Fafard);

	Section* LOG4420 = new Section("LOG4420", "M6410", "Conception des sites web dynamiques et transactionnels", *michel_Gagnon);

	LOG4420->ajouterEtudiant(konstantinos_LambrouLatreille);
	LOG4420->ajouterEtudiant(kahina_Bechiri);
	LOG4420->ajouterEtudiant(mathieu_Fafard);

	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section INF1010 et LOG4420 a l'Ecole Polytechnique" << endl;
	cout << "===============================================" << endl;
	Poly.ajouterSection(&INF1010);
	Poly.ajouterSection(LOG4420);

	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF1000 a l'UQAM" << endl;
	cout << "===============================================" << endl;
	Uqam->ajouterSection(&ISF1000);

	ISF2000->setLocal("A250");

	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF2000 a l'UQAM" << endl;
	cout << "===============================================" << endl;
	Uqam->ajouterSection(ISF2000);

	cout << endl << "===============================================" << endl;
	cout << "On supprime la section ISF2000 a l'UQAM" << endl;
	cout << "===============================================" << endl;
	Uqam->supprimerSection(ISF2000->getSigleCours(), ISF2000->getLocal());

	Poly.afficher();
	Uqam->afficher();

	Poly.~Ecole();
	Uqam->~Ecole();
	jeanMartin_Aussant.~Professeur();
	chahira_Bechiri->~Professeur();
	samuel_Kadoury->~Professeur();
	michel_Gagnon->~Professeur();
	konstantinos_LambrouLatreille.~Etudiant();
	kahina_Bechiri.~Etudiant();
	mathieu_Fafard.~Etudiant();
	ISF1000.~Section();
	ISF2000->~Section();
	INF1010.~Section();
	LOG4420->~Section();
	return 0;
}