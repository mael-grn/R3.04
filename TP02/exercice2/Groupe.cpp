#include "Groupe.h"
#include "Personne.h"
#include <string>
#include <iostream>

using namespace std;

// A COMPLETER
// Implémenter les méthodes nécessaires pour la forme canonique de COPLIEN
Groupe::Groupe(const Groupe& g) {

    for (auto i : g.m_effectif) {
        Personne * temp = new Personne(i->getNom());
        Groupe::m_effectif.push_back(temp) ;
    }
}
Groupe::Groupe(const std::string &intitule)
        : m_intitule(intitule) {
}
Groupe::~Groupe() {
    for(auto i : Groupe::m_effectif) {
        delete i;
    }
}

///////////////////////////////////////////////////
void Groupe::setIntitule(const std::string &intitule) {
    this->m_intitule = intitule;
}

///////////////////////////////////////////////////
void Groupe::addPersonne(const std::string &nom) {
    this->m_effectif.push_back(new Personne(nom));
}

///////////////////////////////////////////////////
void Groupe::setNomPersonne(unsigned int i,
                            const std::string nom) {
    if (i < this->m_effectif.size())
        this->m_effectif[i]->setNom(nom);
}

///////////////////////////////////////////////////
void Groupe::affiche() const {
    cout << "Groupe " << this->m_intitule << " = { ";
    for (Personne *personne: this->m_effectif)
        cout << personne->getNom() << " ";
    cout << "}" << endl;
}
Groupe& Groupe::operator=(const Groupe& g){
    for (auto i : g.m_effectif) {
        Personne * temp = new Personne(i->getNom());
        Groupe::m_effectif.push_back(temp) ;
    }
}

