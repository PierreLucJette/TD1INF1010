#ifndef SECTION_H_
#define SECTION_H_

#include <string>
#include "Professeur.h"
#include "Etudiant.h"

const int MAX_SECTIONS = 75;

class Section
{
public:
	Section();
	Section(const string& sigleCours, const string& local, const string& titreCours, const Professeur& professeur);
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
	Etudiant etudiant_[MAX_SECTIONS]; // Vérifier notation pointeurs des tableaux //TODO: On assume 75 étudiants max automatiquement?
	unsigned int nombreEtudiants_; //J'aurais écris nombreEtudiant_ par conventions, mais les instructions spécifient autrement
};

#endif