#include "Fichier.h"
#include "Element.h"
#include <string>
#include <iostream>
#include "Usager.h"

Fichier::Fichier(const std::string & nom, unsigned int taille, std::string date, const Usager &proprietaire) : Element(nom, proprietaire) {
    this->taille = taille;
    this->date = date;
}
Fichier::~Fichier() {}

unsigned int Fichier::getTaille() {return this->taille;}

void Fichier::ajouter(Element *element) {throw "Opération Interdite sur un Fichier";}
const std::string &Fichier::getDateModification() {return this->date;}