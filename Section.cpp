#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

#include <string>
#include <iostream>

using namespace std;

Section::Section(){
	sigleCours_ = "";
	local_ = "";
	titreCours_ = "";
	professeur_ = new Professeur();
	etudiant_[MAXIMUM_SECTIONS] = {};
	nombreEtudiants_ = 0;
}

Section::Section(const string& sigleCours, const string& local, const string& titreCours, const Professeur& professeur){ //TODO: Vérifier const Etudiant etudiant
	sigleCours_ = sigleCours;
	local_ = local;
	titreCours_ = titreCours;
	etudiant_[MAXIMUM_SECTIONS] = {};
	nombreEtudiants_ = 0; //La section est vide par défault
}

Section::~Section(){}

string Section::getSigleCours() const{
	return sigleCours_;
}

string Section::getLocal() const{
	return local_;
}

string Section::getTitreCours() const{
	return titreCours_;
}

Professeur Section::getProfesseur() const{
	return *professeur_;
}

unsigned int Section::getNombreEtudiants() const{
	return nombreEtudiants_;
}

void Section::setSigleCours(const string& sigleCours){
	sigleCours_ = sigleCours;
}

void Section::setLocal(const string& local){
	local_ = local;
}

void Section::setTitreCours(const string& titreCours){
	titreCours_ = titreCours;
}

void Section::setProfesseur(const Professeur& professeur){
	*professeur_ = professeur;
}

void Section::setNombreEtudiants(const unsigned int& nombreEtudiants){
	nombreEtudiants_ = nombreEtudiants;
}

bool Section::ajouterEtudiant(Etudiant& etudiant){
	bool bienAjoute = true, dejaPresent = false;
	for (unsigned int i = 0; i < nombreEtudiants_; i++){
		if (etudiant_[i].getMatricule() == etudiant.getMatricule())
			dejaPresent = true;
	}
	if (nombreEtudiants_ < 75 && dejaPresent == false)
	etudiant_[nombreEtudiants_] = etudiant;
	++nombreEtudiants_;
	return dejaPresent;
}

void Section::afficher(){
	cout << "Sigle de cours: " << sigleCours_ << endl << "Local: " << local_ << endl << "Titre du cours: " << titreCours_ << endl;
	professeur_->afficher();
	for (int i = 0; i < MAXIMUM_SECTIONS; i++){
		cout << "Etudiant numero " << i << endl;
		etudiant_[i].afficher();
	}
	cout << "Nombre d'etudiants dans la section: " << nombreEtudiants_ << endl;
}
