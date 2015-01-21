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

	//Affichage des informations de l'étudiant
	void afficher();

private:
	string matricule_, prenom_, nom_;
};

#endif