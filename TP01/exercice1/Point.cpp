// Dans le fichier d'implémentation d'une classe, on doit inclure le fichier de spécification de cette classe
#include "Point.h"

// Et on inclura aussi les librairies utilisées ici
#include <iostream>
#include <string>

using namespace std;


// A COMPLETER - Implémenter les méthodes de la classe Point

string const Point::NOM_DEF = "unPoint";
int const Point::X_DEF = 0;
int const Point::Y_DEF = 0;

Point::Point(std::string nom, int x, int y) {
    this->nom = nom;
    this->x = x;
    this->y = y;
}

string Point::getNom() const {
    return this->nom;
}
void Point::setNom(std::string nom) {
    this->nom = nom;
}
int Point::getX() const {
    return this->x;
}
void Point::setX(int x) {
    this->x = x;
}
int Point::getY() const {
    return this->y;
}
void Point::setY(int y) {
    this->y = y;
}

void Point::afficher(std::ostream &sortie) {
    cout << this->nom << " : x = " << this->x << ", y = " << this->y;
}

void Point::saisir(std::istream &entree) {
    cout << "Nom du point : ";
    cin >> this->nom;
    cout << "Valeur de x : ";
    cin >> this->x;
    cout << "Valeur de y : ";
    cin >> this->y;
}