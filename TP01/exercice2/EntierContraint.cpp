#include "EntierContraint.h"
#include <iostream>
#include <limits>

using namespace std;

EntierContraint::EntierContraint(int valeur, int min, int max) {
    this->min = min;
    this->max = max;
    this->val = valeur;
}

void EntierContraint::setVal(int val) {
    if (val >= this->min & val <= this->max) {
        this->val = val;
    } else {
        throw( char const*) "ERREUR : VALEUR EN DEHORS DU DOMAINE DE DEFINITION";
    }
}

int EntierContraint::getVal() const {
    return this->val;
}
int EntierContraint::getMax() const {
    return this->max;
}
int EntierContraint::getMin() const {
    return this->min;
}

void EntierContraint::saisir(std::istream &entree) {
    cout << "Saisir votre valeur (comprise entre " << this->min << " et " << this->max << ") : ";
    int temp;
    cin >> temp;
    setVal(temp);
}

void EntierContraint::afficher(std::ostream &sortie) const {
    cout << "Valeur = " << this->val << ", min = " << this->min << ", max = " << this->max <<"\n";
}

