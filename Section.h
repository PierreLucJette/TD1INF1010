/********************************************************************
Fichier: Section.h
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
Description:
	Fichier contenant la description de la classe Section.
********************************************************************/

#ifndef SECTION_H_
#define SECTION_H_

#include <string>
#include "Professeur.h"
#include "Etudiant.h"

const int MAXIMUM_SECTIONS = 75; //Nombre maximum d'�tudiants dans une section

class Section
{
public:
	Section();
	Section(const string& sigleCours, const string& local, const string& titreCours, Professeur& professeur);
	~Section();

	string getSigleCours() const;
	string getLocal() const;
	string getTitreCours() const;
	Professeur getProfesseur() const;
	unsigned int getNombreEtudiants() const;

	void setSigleCours(const string& sigleCours);
	void setLocal(const string& local);
	void setTitreCours(const string& titreCours);
	void setProfesseur(const Professeur& professeur);
	void setNombreEtudiants(const unsigned int& nombreEtudiants);

	bool ajouterEtudiant(const Etudiant& etudiant);

	void afficher();

private:
	string sigleCours_, local_, titreCours_;
	Professeur* professeur_;
	Etudiant* etudiant_[MAXIMUM_SECTIONS];
	unsigned int nombreEtudiants_; //J'aurais �cris nombreEtudiant_ par conventions, mais les instructions sp�cifient autrement
};

#endif