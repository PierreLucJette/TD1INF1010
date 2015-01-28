/********************************************************************
Fichier: main.cpp
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
Description: 
	Fichier main qui contient l'ex�cution principale du TP1 - INF1010
	Le programme cr�e une forme simplifi�e d'une �cole, contenant des
	sections, des professeurs et des �tudiants. Le programme cr�e des 
	objets g�n�riques, effectue sur eux quelques modifications d'attributs
	pour enfin afficher toutes les informations des objets cr�es �
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
	// 1) Cr�er automatiquement un objet Ecole avec son constructeur par d�faut
	//    et modifier ses attributs :
	//	  nom="�cole Polytechnique de Montr�al"
	//	  adresse="2900 Boulevard Edouard-Montpetit, Montr�al, Qu�bec H3T 1J4"
	Ecole Poly;
	Poly.setNom("Ecole Polytechnique de Montreal");
	Poly.setAdresse("2900 Boulevard Edouard-Montpetit, Montreal, Quebec, H3T 1J4");

	// 2) Cr�er dynamiquement un objet Ecole avec son constructeur par param�tres
	//    et modifier ses attributs :
	//	  nom="Universit� de Qu�bec � Montr�al"
	//	  adresse="405 Rue Sainte-Catherine Est, Montr�al, Qu�bec H2L 2C4"
	Ecole* Uqam = new Ecole("Universite du Quebec a Montreal", "405 Rue Sainte-Catherine Est, Montreal, Quebec H2L2C4");

	// 3) Cr�er automatiquement un objet Professeur avec son constructeur par d�faut.
	//    et modifier les arguments suivants:
	//		matricule="p12"
	//		prenom="Jean-Martin"
	//		nom="Aussant"
	//		departement="D�partement de science �conomique"
	Professeur jeanMartin_Aussant;
	jeanMartin_Aussant.setNumeroEmploye("p12");
	jeanMartin_Aussant.setPrenom("Jean-Martin");
	jeanMartin_Aussant.setNom("Aussant");
	jeanMartin_Aussant.setDepartement("Departement de science economique");

	// 4) Cr�er dynamiquement un objet Professeur avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="p13"
	//		prenom="Chahira"
	//		nom="Bechiri"
	//		departement="D�partement de science informatique"
	Professeur* chahira_Bechiri = new Professeur("p13", "Chahira", "Bechiri", "Departement de science informatique");

	// 5) Cr�er dynamiquement un objet Professeur avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="p14"
	//		prenom="Samuel"
	//		nom="Kadoury"
	//		departement="D�partement de g�nie informatique et logiciel"
	Professeur* samuel_Kadoury = new Professeur("p14", "Samuel", "Kadoury", "Departement de genie informatique et logiciel");

	// 6) Cr�er dynamiquement un objet Professeur avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="p15"
	//		prenom="Michel"
	//		nom="Gagnon"
	//		departement="D�partement de g�nie informatique et logiciel"
	Professeur* michel_Gagnon = new Professeur("p15", "Michel", "Gagnon", "Departement de genie informatique et logiciel");

	// 7) Cr�er automatiquement un objet Etudiant avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="1510301"
	//		prenom="Konstantinos"
	//		nom="Lambrou-Latreille"
	Etudiant konstantinos_LambrouLatreille("1510301", "Konstantinos", "Lambrou-Latreille");

	// 8) Cr�er automatiquement un objet Etudiant avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="1475812"
	//		prenom="Kahina"
	//		nom="Bechiri"
	Etudiant kahina_Bechiri("1475812", "Kahina", "Bechiri");

	// 9) Cr�er automatiquement un objet Etudiant avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		matricule="1506813"
	//		prenom="Mathieu"
	//		nom="Fafard"
	Etudiant mathieu_Fafard("1506813", "Mathieu", "Fafard");

	// 10) Cr�er automatiquement un objet Section avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		sigle="ISF1000"
	//		local="C215"
	//		titre="�conomie 101"
	//		prof=p12 - Jean-Martin Aussant
	Section ISF1000("ISF1000", "C215", "Economie 101", jeanMartin_Aussant);

	// 11) Ajouter le deuxi�me �tudiant au cours ISF1000.
	ISF1000.ajouterEtudiant(kahina_Bechiri);

	// 12) Cr�er dynamiquement un objet Section avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		sigle="ISF2000"
	//		local="C214"
	//		titre="�tude en science cognitive"
	//		prof=p13 - Chahira Bechiri
	Section* ISF2000 = new Section("ISF2000", "C214", "Etude en science cognitive", *chahira_Bechiri);

	// 13) Ajouter le premier et le deuxi�me �tudiant au cours ISF2000.
	ISF2000->ajouterEtudiant(konstantinos_LambrouLatreille);
	ISF2000->ajouterEtudiant(kahina_Bechiri);

	// 14) Cr�er automatiquement un objet Section avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		sigle="INF1010"
	//		local="L6614"
	//		titre="Programmation orient�e-objet"
	//		prof=p14 - Samuel Kadoury
	Section INF1010("INF1010", "L6614", "Programmation Orientee-Objet", *samuel_Kadoury);

	// 15) Ajouter le premier et le troisi�me �tudiant au cours INF1010.
	INF1010.ajouterEtudiant(konstantinos_LambrouLatreille);
	INF1010.ajouterEtudiant(mathieu_Fafard);

	// 16) Cr�er dynamiquement un objet Section avec son constructeur par param�tre.
	//    Utiliser les arguments suivants:
	//		sigle="LOG4420"
	//		local="M6410"
	//		titre="Conception de sites web dynamiques et transactionnels"
	//		prof=p15 - Michel Gagnon
	Section* LOG4420 = new Section("LOG4420", "M6410", "Conception des sites web dynamiques et transactionnels", *michel_Gagnon);

	// 17) Ajouter le premier, le deuxi�me et le troisi�me �tudiant au cours LOG4420.
	LOG4420->ajouterEtudiant(konstantinos_LambrouLatreille);
	LOG4420->ajouterEtudiant(kahina_Bechiri);
	LOG4420->ajouterEtudiant(mathieu_Fafard);

	// 18) Ajouter le cours INF1010 et le cours LOG4420 � l'�cole Polytechnique.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section INF1010 et LOG4420 a l'Ecole Polytechnique" << endl;
	cout << "===============================================" << endl;
	Poly.ajouterSection(&INF1010);
	Poly.ajouterSection(LOG4420);

	// 19) Ajouter le cours ISF1000 � l'UQAM.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF1000 a l'UQAM" << endl;
	cout << "===============================================" << endl;
	Uqam->ajouterSection(&ISF1000);

	// 20) Modifier le local du cours ISF2000 vers le local A250.
	ISF2000->setLocal("A250");
	// 21) Ajouter le cours ISF2000 � l'UQAM.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF2000 a l'UQAM" << endl;
	cout << "===============================================" << endl;
	Uqam->ajouterSection(ISF2000);

	// 22) Supprimer le cours ISF2000 de l'UQAM
	cout << endl << "===============================================" << endl;
	cout << "On supprime la section ISF2000 a l'UQAM" << endl;
	cout << "===============================================" << "\n\n\n";
	Uqam->supprimerSection(ISF2000->getSigleCours(), ISF2000->getLocal());

	// 23) Afficher les deux �coles cr��es.
	Poly.afficher();
	Uqam->afficher();

	// 24) Lib�rer la m�moire
	//TODO: AUGMENTER LISIBILIT� DE L'AFFICHAGE
	Poly.~Ecole();
	Uqam->~Ecole();
	return 0;
}