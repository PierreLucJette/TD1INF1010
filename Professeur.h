#include <string>

#ifndef PROFESSEUR_H_
#define PROFESSEUR_H_

class Professeur
{
public:
	Professeur();
	Professeur(const string& numeroEmploye, const string& prenom, const string& nom, const string& departement);
	~Professeur();

	string getNumeroEmploye() const;
	string getPrenom() const;
	string getNom() const;
	string getDepartement() const;

	void setNumeroEmploye(const string& numeroEmploye);
	void setPrenom(const string& prenom);
	void setNom(const string& nom);
	void setDepartement(const string& departement);

	void afficher();

private:
	string numeroEmploye_, prenom_, nom_, departement_;
};

#endif