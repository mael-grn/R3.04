#include "Element.h"
#include <string>
#include <iostream>
#include "Usager.h"

using namespace std;

Element::Element(const std::string & nom, const Usager &proprietaire) {
    this->nom=nom;
    this->proprietaire=&proprietaire;
}
Element::~Element() {}

const std::string &Element::getNom() {return nom;}
void Element::setNom(const std::string &nom) {this->nom = nom;}

const Usager* &Element::getProprietaire() {return this->proprietaire;}
void Element::setProprietaire(const Usager* &proprietaire) {this->proprietaire=proprietaire;}


void Element::setDateModification(const std::string &date) {this->date = date;}

void Element::afficher() {
    cout << this->getNom() << " : \n\t- proprietaire : " << this->getProprietaire() << "\n\t- taille : " << this->getTaille() << "\n\t- derniere modification : " << this->getDateModification();
}
