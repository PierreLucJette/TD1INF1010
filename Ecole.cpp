/********************************************************************
Fichier: Ecole.cpp
Auteurs: Pierre-Luc Jetté && Claire Quesnel
Date de création: 21 janvier 2015
Dernière modification: 28 janvier 2015
Description:
	Fichier contenant l'implémentation de la classe Ecole.
********************************************************************/

#include "Ecole.h"
#include "Section.h"
#include "Professeur.h"
#include "Etudiant.h"

#include <iostream>
#include <string>

using namespace std;

Ecole::Ecole(){
	nom_ = "";
	adresse_ = "";
	nombreSections_ = 0;
	for (int i = 0; i < MAX_SECTIONS; i++){
		sections_[i] = NULL;
	}
}

Ecole::Ecole(const string& nom, const string& adresse){ //L'utilisateur n'a jamais accès aux sections et à leur nombre
	nom_ = nom;
	adresse_ = adresse;
	nombreSections_ = 0;
	for (int i = 0; i < MAX_SECTIONS; i++){
		sections_[i] = NULL;
	}
}

Ecole::~Ecole(){
	for (int i=0; i < nombreSections_; i++)
		sections_[i]->~Section();
}

string Ecole::getNom() const{
	return nom_;
}

string Ecole::getAdresse() const{
	return adresse_;
}

unsigned int Ecole::getNombreSection() const{
	return nombreSections_;
}

void Ecole::setNom(const string& nom){
	nom_ = nom;
}

void Ecole::setAdresse(const string& adresse){
	adresse_ = adresse;
}

bool Ecole::ajouterSection(Section* section){
	bool estPresente = false;
	if (nombreSections_ < MAX_SECTIONS){ // S'il reste de la place pour une nouvelle section dans l'école
		for (unsigned int i = 0; i < nombreSections_; i++){
			if ((sections_[i] == section) || sections_[i]->getLocal() == section->getLocal()) // Ici, l'utilisation de estPresente nous sauve l'utilisation d'une nouvelle variable, localEstOccupe.
				// Si la section est déjà inscrite dans la liste ou si une autre section utilise le même local, on rejette l'ajout de la section.
				estPresente = true;
		}
		if (estPresente == false){ //Si la section n'existe pas déjà et que le local est libre, on l'ajoute à la fin du tableau et on incrémente nombreSections_.
			sections_[nombreSections_] = section;
			++nombreSections_;
		}
	}
	return estPresente;
}

bool Ecole::supprimerSection(const string& sigle, const string& local){ // En assumant que la combinaison sigle/local est unique
	bool estPresente = false;
	unsigned int marqueur = 0;
	for (unsigned int i = 0; i < nombreSections_; i++){
		if (sections_[i]->getSigleCours() == sigle && sections_[i]->getLocal() == local){ // Si on trouve que la section existe dans notre tableau (en comparant le sigle de cours et le local), on marque la position avec un marqueur et on efface le pointeur sur cette position
			estPresente = true;
			sections_[i] = NULL;
			marqueur = i;
		}
	}
	if (estPresente){ // Si estPresente, on décale toutes les sections après notre marquer pour combler le trou et on décrémente le nombre de sections.
		--nombreSections_;
		for (unsigned int i = marqueur; i < nombreSections_; i++){
			sections_[i] = sections_[i + 1];
		}
	}
	return estPresente;
}

void Ecole::afficher(){
	cout << "Nom de l'ecole: " << nom_ << endl << "Adresse: " << adresse_ << endl << "Nombre de sections: " << nombreSections_ << "\n\n\n";
	for (unsigned int i = 0; i < nombreSections_; i++){
		cout << "Section numero " << i + 1 << endl;
		sections_[i]->afficher();
	}
	cout << "\n\n\n===============================================\n\n\n";
}


