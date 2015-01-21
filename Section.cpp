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
	professeur_ = new Professeur(); //TODO: V�rifier si initialisation correcte
	etudiant_[MAX_SECTIONS] = { new Etudiant }; //TODO: Ici aussi...
	nombreEtudiants_ = 0;
}

Section::Section(const string& sigleCours, const string& local, const string& titreCours, const Professeur& professeur, const Etudiant etudiant, const unsigned int& nombreEtudiant){ //TODO: V�rifier const Etudiant etudiant

}