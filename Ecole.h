/********************************************************************
Fichier: Ecole.h
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
Description:
	Fichier contenant la description de la classe Ecole.
********************************************************************/

#ifndef ECOLE_H
#define ECOLE_H

#include <iostream>
#include <string>
#include "Section.h"

using namespace std;

// Les constantes
const int MAX_SECTIONS = 50; //Nombre maximum de sections qu'une �cole peut contenir

/**
Cette classe repr�sente un mod�le simplifi� d'une �cole.
*/
class Ecole
{
public:
	//constructeurs
	Ecole();
	Ecole(const string& nom, const string& adresse);
	~Ecole();

	// Les accesseurs
	string getNom() const;
	string getAdresse() const;
	unsigned int getNombreSection() const;

	// Les mutateurs
	void setNom(const string& nom);
	void setAdresse(const string& adresse);

	bool ajouterSection(Section* section);
	bool supprimerSection(const string& sigle, const string& local);

	//affichage
	void afficher();

private:
	string nom_;
	string adresse_;
	unsigned int nombreSections_;
	Section* sections_[MAX_SECTIONS];
};

#endif