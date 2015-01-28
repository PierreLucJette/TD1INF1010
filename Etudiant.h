/********************************************************************
Fichier: Etudiant.h
Auteurs: Pierre-Luc Jetté && Claire Quesnel
Date de création: 21 janvier 2015
Dernière modification: 28 janvier 2015
Description:
	Fichier contenant la description de la classe Etudiant.
********************************************************************/


#ifndef ETUDIANT_H_
#define ETUDIANT_H_

#include <string>
#include <iostream>

using namespace std;

class Etudiant
{
public:
	//constructeurs
	Etudiant();
	Etudiant(const string& matricule, const string& prenom, const string& nom);

	//destructeurs
	~Etudiant();

	//accesseurs
	string getMatricule() const;
	string getPrenom() const;
	string getNom() const;

	//mutateurs
	void setMatricule(const string& matricule);
	void setPrenom(const string& prenom);
	void setNom(const string& nom);

	//affichage
	void afficher();

private:
	string matricule_, prenom_, nom_;
};

#endif