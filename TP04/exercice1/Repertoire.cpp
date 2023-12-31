#include "Repertoire.h"
#include "Element.h"
#include <string>
#include <iostream>
#include "Usager.h"
#include <vector>

using namespace std;

const string Repertoire::defDate = "1970-01-01";

Repertoire::Repertoire(const std::string &nom, const Usager &proprietaire) : Element(nom, proprietaire){}
Repertoire::~Repertoire() {
    for(auto i : contenu) {
        delete i;
    }
}

const std::string &Repertoire::getDateModification() {
    const string * latest;

    //attribution d'un valeur par defaut : si la liste d'element n'est pas vide, donne la date du premier element
    if (contenu.empty()){
        latest = &Repertoire::defDate;
    } else {
        latest = &contenu[0]->getDateModification();
    }

    //recherche de l'element le plus recent dans la liste
    for (auto i : contenu) {
        if (i->getDateModification().compare(*latest)>0){
            latest = &i->getDateModification();
        }
    }
    return *latest;
}

unsigned int Repertoire::getTaille() {
    unsigned int total = 4;
    if (!contenu.empty()){
        for (auto i : contenu) {
            total += i->getTaille();
        }
    }
    return total;
}

void Repertoire::ajouter(Element *element) {
    contenu.push_back(element);
}

void Repertoire::afficher() {
    cout << this->getNom() << " : \n\t- proprietaire : ";
    this->getProprietaire().afficher();
    cout << "\n\t- taille : " << this->getTaille() << "Ko" << "\n\t- derniere modification : " << this->getDateModification()
    << "\n\t- contient : ";
    if (contenu.empty()) {
        cout << "\n\t\t* fichier vide";
    }
    for (auto i : contenu){
        cout << "\n\t\t* " << i->getNom();
    }
    cout<<"\n";
}

