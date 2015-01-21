/********************************************************************
 Fichier: main.cpp
 Auteur: Konstantinos Lambrou-Latreille
 Description: 
	Fichier main qui contient l'exécution principale du TP1 de INF1010.
	Bien lire les commentaires et coder les instructions.
********************************************************************/

#include <iostream>
#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

using namespace std;

int main()
{
	cout << endl;
	
	// 1) Créer automatiquement un objet Ecole avec son constructeur par défaut
	//    et modifier ses attributs :
	//	  nom="École Polytechnique de Montréal"
	//	  adresse="2900 Boulevard Edouard-Montpetit, Montréal, Québec H3T 1J4"


	// 2) Créer dynamiquement un objet Ecole avec son constructeur par paramètres
	//    et modifier ses attributs :
	//	  nom="Université de Québec à Montréal"
	//	  adresse="405 Rue Sainte-Catherine Est, Montréal, Québec H2L 2C4"


	// 3) Créer automatiquement un objet Professeur avec son constructeur par défaut.
	//    et modifier les arguments suivants:
	//		matricule="p12"
	//		prenom="Jean-Martin"
	//		nom="Aussant"
	//		departement="Département de science économique"


	// 4) Créer dynamiquement un objet Professeur avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="p13"
	//		prenom="Chahira"
	//		nom="Bechiri"
	//		departement="Département de science informatique"


	// 5) Créer dynamiquement un objet Professeur avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="p14"
	//		prenom="Samuel"
	//		nom="Kadoury"
	//		departement="Département de génie informatique et logiciel"


	// 6) Créer dynamiquement un objet Professeur avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="p15"
	//		prenom="Michel"
	//		nom="Gagnon"
	//		departement="Département de génie informatique et logiciel"


	// 7) Créer automatiquement un objet Etudiant avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="1510301"
	//		prenom="Konstantinos"
	//		nom="Lambrou-Latreille"


	// 8) Créer automatiquement un objet Etudiant avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="1475812"
	//		prenom="Kahina"
	//		nom="Bechiri"


	// 9) Créer automatiquement un objet Etudiant avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		matricule="1506813"
	//		prenom="Mathieu"
	//		nom="Fafard"


	// 10) Créer automatiquement un objet Section avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		sigle="ISF1000"
	//		local="C215"
	//		titre="Économie 101"
	//		prof=p12 - Jean-Martin Aussant


	// 11) Ajouter le deuxième étudiant au cours ISF1000.


	// 12) Créer dynamiquement un objet Section avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		sigle="ISF2000"
	//		local="C214"
	//		titre="Étude en science cognitive"
	//		prof=p13 - Chahira Bechiri


	// 13) Ajouter le premier et le deuxième étudiant au cours ISF2000.


	// 14) Créer automatiquement un objet Section avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		sigle="INF1010"
	//		local="L6614"
	//		titre="Programmation orientée-objet"
	//		prof=p14 - Samuel Kadoury


	// 15) Ajouter le premier et le troisième étudiant au cours INF1010.


	// 16) Créer dynamiquement un objet Section avec son constructeur par paramètre.
	//    Utiliser les arguments suivants:
	//		sigle="LOG4420"
	//		local="M6410"
	//		titre="Conception de sites web dynamiques et transactionnels"
	//		prof=p15 - Michel Gagnon


	// 17) Ajouter le premier, le deuxième et le troisième étudiant au cours LOG4420.


	// 18) Ajouter le cours INF1010 et le cours LOG4420 à l'École Polytechnique.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section INF1010 et LOG4420 à l'École Polytechnique" << endl;
	cout << "===============================================" << endl;


	// 19) Ajouter le cours ISF1000 à l'UQAM.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF1000 à l'UQAM" << endl;
	cout << "===============================================" << endl;


	// 20) Modifier le local du cours ISF2000 vers le local A250.
	// 21) Ajouter le cours ISF2000 à l'UQAM.
	cout << endl << "===============================================" << endl;
	cout << "Ajout de la section ISF2000 à l'UQAM" << endl;
	cout << "===============================================" << endl;


	// 22) Supprimer le cours ISF2000 de l'UQAM
	cout << endl << "===============================================" << endl;
	cout << "On supprime la section ISF2000 à l'UQAM" << endl;
	cout << "===============================================" << endl;


	// 23) Afficher les deux écoles créées.


	// 24) Libérer la mémoire


	cout << endl;
	return 0;
}