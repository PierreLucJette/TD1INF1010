/********************************************************************
Fichier: Etudiant.h
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
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
	Etudiant();
	Etudiant(const string& matricule, const string& prenom, const string& nom);
	~Etudiant();

	string getMatricule() const;
	string getPrenom() const;
	string getNom() const;

	void setMatricule(const string& matricule);
	void setPrenom(const string& prenom);
	void setNom(const string& nom);

	//Affichage des informations de l'�tudiant
	void afficher();

private:
	string matricule_, prenom_, nom_;
};

#endif