/********************************************************************
Fichier: Section.cpp
Auteurs: Pierre-Luc Jetté && Claire Quesnel
Date de création: 21 janvier 2015
Dernière modification: 28 janvier 2015
Description:
	Fichier contenant l'implémentation de la classe Section.
********************************************************************/

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

Section::Section(const string& sigleCours, const string& local, const string& titreCours, Professeur& professeur){
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
	for (unsigned int i = 0; i < nombreEtudiants_; i++){ //On vérifie si l'étudiant est déjà présent en comparant son matricule à ceux du tableau
		if (etudiant_[i]->getMatricule() == etudiant.getMatricule())
			dejaPresent = true;
	}
	if (nombreEtudiants_ < MAXIMUM_SECTIONS && dejaPresent == false){ //S'il n'est pas présent et qu'il reste de la place dans la section, on l'ajoute dans la section et on incrémente le nombre de personnes dans la section
		*etudiant_[nombreEtudiants_] = etudiant;
		++nombreEtudiants_;
		bienAjoute = true;
	}
	return bienAjoute;
}

void Section::afficher(){
	cout << "Sigle de cours: " << sigleCours_ << endl << "Local: " << local_ << endl << "Titre du cours: " << titreCours_ << endl;
	professeur_->afficher(); //L'objet professeur va appeler sa propre fonction afficher, similaire à celle-ci.
	for (unsigned int i = 0; i < nombreEtudiants_; i++){ //On appele nombreEtudiants_ individuellement et on lui fait afficher ses informations avec une fonction afficher similaire à celle-ci.
		cout << "Etudiant numero " << i + 1 << endl;
		etudiant_[i]->afficher();
	}
	cout << "Nombre d'etudiants dans la section: " << nombreEtudiants_ << "\n\n\n";
}
