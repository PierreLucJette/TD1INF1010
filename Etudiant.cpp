#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

#include <iostream>

Etudiant::Etudiant(){
	matricule_ = "";
	prenom_ = "";
	nom_ = "";
}

Etudiant::Etudiant(const string& matricule, const string& prenom, const string& nom){
	matricule_ = matricule;
	prenom_ = prenom;
	nom_ = nom;
}

Etudiant::~Etudiant(){}

string Etudiant::getMatricule() const{
	return matricule_;
}

string Etudiant::getPrenom() const{
	return prenom_;
}

string Etudiant::getNom() const{
	return nom_;
}

void Etudiant::setMatricule(const string& matricule){
	matricule_ = matricule;
}

void Etudiant::setPrenom(const string& prenom){
	prenom_ = prenom;
}

void Etudiant::setNom(const string& nom){
	nom_ = nom;
}

void Etudiant::afficher(){
	cout << "Matricule: " << matricule_ << endl << "Prenom: " << prenom_ << endl << "Nom: " << nom_ << endl;
}