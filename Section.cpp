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
	professeur_ = NULL;
	for (int i = 0; i < MAXIMUM_SECTIONS; i++){
		etudiant_[i] = new Etudiant;
	}
	nombreEtudiants_ = 0;
}

Section::Section(const string& sigleCours, const string& local, const string& titreCours, Professeur& professeur){ //TODO: Vérifier const Etudiant etudiant
	sigleCours_ = sigleCours;
	local_ = local;
	titreCours_ = titreCours;
	professeur_ = &professeur;
	for (int i = 0; i < MAXIMUM_SECTIONS; i++){
		etudiant_[i] = new Etudiant;
	}
	nombreEtudiants_ = 0; //La section est vide par défault
}

Section::~Section(){
	professeur_->~Professeur();
	for (int i = 0; i < nombreEtudiants_; i++)
		etudiant_[i]->~Etudiant();
}

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

bool Section::ajouterEtudiant(const Etudiant& etudiant){
	bool bienAjoute = false , dejaPresent = false;
	for (unsigned int i = 0; i < nombreEtudiants_; i++){
		if (etudiant_[i]->getMatricule() == etudiant.getMatricule())
			dejaPresent = true;
	}
	if (nombreEtudiants_ < MAXIMUM_SECTIONS && dejaPresent == false){
		*etudiant_[nombreEtudiants_] = etudiant;
		++nombreEtudiants_;
		bienAjoute = true;
	}
	return bienAjoute;
}

void Section::afficher(){
	cout << "Sigle de cours: " << sigleCours_ << endl << "Local: " << local_ << endl << "Titre du cours: " << titreCours_ << endl;
	professeur_->afficher();
	for (unsigned int i = 0; i < nombreEtudiants_; i++){
		cout << "Etudiant numero " << i + 1 << endl;
		etudiant_[i]->afficher();
	}
	cout << "Nombre d'etudiants dans la section: " << nombreEtudiants_ << endl;
}
