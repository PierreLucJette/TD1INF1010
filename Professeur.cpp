/********************************************************************
Fichier: Professeur.cpp
Auteurs: Pierre-Luc Jett� && Claire Quesnel
Date de cr�ation: 21 janvier 2015
Derni�re modification: 28 janvier 2015
Description:
	Fichier contenant l'impl�mentation de la classe Professeur.
********************************************************************/

#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

#include <iostream>
#include <string>

using namespace std;

Professeur::Professeur(){
	numeroEmploye_ = "";
	prenom_ = "";
	nom_ = "";
	departement_ = "";
}

Professeur::Professeur(const string& numeroEmploye, const string& prenom, const string& nom, const string& departement){
	numeroEmploye_ = numeroEmploye;
	prenom_ = prenom;
	nom_ = nom;
	departement_ = departement;
}

Professeur::~Professeur(){}

string Professeur::getNumeroEmploye() const{
	return numeroEmploye_;
}

string Professeur::getPrenom() const{
	return prenom_;
}

string Professeur::getNom() const{
	return nom_;
}

string Professeur::getDepartement() const{
	return departement_;
}

void Professeur::setNumeroEmploye(const string& numeroEmploye){
	numeroEmploye_ = numeroEmploye;
}

void Professeur::setPrenom(const string& prenom){
	prenom_ = prenom;
}

void Professeur::setNom(const string& nom){
	nom_ = nom;
}

void Professeur::setDepartement(const string& departement){
	departement_ = departement;
}

void Professeur::afficher(){
	cout << "Numero d'employe: " << numeroEmploye_ << endl << "Prenom: " << prenom_ << endl << "Nom: " << nom_ << endl << "Departement: " << departement_ << "\n\n\n";
}