////////////////////////////////////////////////////////////////////////////////
// COMPLETEZ CE FICHIER
////////////////////////////////////////////////////////////////////////////////

#include "Parametres.h"
#include <iostream>
using namespace std;

Parametres::Parametres(std::string intituleTheme) : theme(intituleTheme) {
    this->joueur = new Joueur("Anonyme");
}
Parametres::~Parametres() {
    delete &this->theme;
};

void Parametres::setTheme(Theme theme) {
    delete &this->theme;
    this->theme = *new Theme(theme.getIntitule());
}

void Parametres::setJoueur(Joueur joueur) {
    delete this->joueur;
    this->joueur = &joueur;
}

Theme &Parametres::getTheme() {
    return this->theme;
}

Joueur *Parametres::getJoueur() {
    return this->joueur;
}

void Parametres::afficher() {
    cout << "parametre { Theme : " <<this->getTheme().getIntitule() << ", Joueur : " << this->getJoueur()->getPseudo() << "}\n";
}