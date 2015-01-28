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

Ecole::~Ecole(){}

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
	if (nombreSections_ < 50){
		for (unsigned int i = 0; i < nombreSections_; i++){
				if (sections_[i] == section)
					estPresente = true;
		}
		if (estPresente){
			sections_[nombreSections_] = section;
			++nombreSections_;
		}
	}
	
	return estPresente;
}

bool Ecole::supprimerSection(const string& sigle, const string& local){ // En assumant que la combinaison sigle/local est unique
	bool estPresente = false;
	unsigned int marqueur = 0;
	for (unsigned int i = 0; i < nombreSections_; i++){ // On flag la position de la section à supprimer dans le tableau de sections et on la supprime.
		if (sections_[i]->getSigleCours() == sigle && sections_[i]->getLocal() == local){
			estPresente = true;
			sections_[i] = {};
			marqueur = i;
		}
	}
	if (estPresente){ // Si notre flag == true, on décale les sections après celle supprimée pour boucher le trou.
		--nombreSections_;
		for (unsigned int i = marqueur; i < nombreSections_; i++){
			sections_[i] = sections_[i + 1];
		}
	}
	return estPresente;
}

void Ecole::afficher(){
	cout << "Nom de l'ecole: " << nom_ << endl << "Adresse: " << adresse_ << endl << "Nombre de sections: " << nombreSections_ << endl;
	for (unsigned int i = 0; i < nombreSections_; i++){
		cout << "Section numero " << i << endl;
		sections_[i]->afficher();
	}
}


