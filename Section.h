#include <string>

#ifndef SECTION_H_
#define SECTION_H_

const int MAX_SECTIONS = 75;

class Section
{
public:
	Section();
	Section(const string& sigleCours, const string& local, const string& titreCours, const Professeur& professeur, const Etudiant etudiant[], const unsigned int& nombreEtudiant);
	~Section();
	//TODO: �crire les constructeurs par param�tres (???)

	string getSigleCours() const;
	string getLocal() const;
	string getTitreCours() const;
	string getProfesseur() const;
	unsigned int getNombreEtudiants() const;

	void setSigleCours(const string& sigleCours);
	void setLocal(const string& local);
	void setTitreCours(const string& titreCours);
	void setProfesseur(const Professeur& professeur);
	void setNombreEtudiants(const unsigned int nombreEtudiants);

	bool ajouterEtudiant(const Etudiant& etudiant);
	//TODO: V�rifier avec le charg� si un supprimerEtudiant est necessaire

	void afficher();

private:
	string sigleCours_, local_, titreCours_;
	Professeur* professeur_;
	Etudiant etudiant_[MAX_SECTIONS]; // V�rifier notation pointeurs des tableaux //TODO: On assume 75 �tudiants max automatiquement?
	unsigned int nombreEtudiants_; //J'aurais �cris nombreEtudiant_ par conventions, mais les instructions sp�cifient autrement
};

#endif