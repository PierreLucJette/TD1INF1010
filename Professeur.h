/********************************************************************
Fichier: Professeur.h
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
Description:
	Fichier contenant la description de la classe Professeur.
********************************************************************/


#ifndef PROFESSEUR_H_
#define PROFESSEUR_H_

#include <string>

using namespace std;

class Professeur
{
public:
	//constructeurs
	Professeur();
	Professeur(const string& numeroEmploye, const string& prenom, const string& nom, const string& departement);

	//destructeur
	~Professeur();

	//acccesseurs
	string getNumeroEmploye() const;
	string getPrenom() const;
	string getNom() const;
	string getDepartement() const;

	//mutateurs
	void setNumeroEmploye(const string& numeroEmploye);
	void setPrenom(const string& prenom);
	void setNom(const string& nom);
	void setDepartement(const string& departement);

	//affichage
	void afficher();

private:
	string numeroEmploye_, prenom_, nom_, departement_;
};

#endif