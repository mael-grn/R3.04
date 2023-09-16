#include <cstdlib>
#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

void testClassePoint(string nom, int x, int y){
    Point p;
    cout << "*** Test valeur par default d'un Point : \n\n";
    p.afficher(cout);

    cout << "\n\n*** Test des setteurs : \n\n";
    p.setNom(nom);
    p.setX(x);
    p.setY(y);
    p.afficher(cout);

    cout << "\n\n*** Test des getteurs : \n\n" << p.getNom() << ", " << p.getX() << ", " << p.getY();

    cout << "\n\n*** Test saisie valeur d'un point : \n\n";
    p.saisir(cin);
    p.afficher(cout);
}

void testClassePointDyniamique(string nom, int x, int y){
    Point * p = new Point();
    cout << "*** Test valeur par default d'un Point : \n\n";
    p->afficher(cout);

    cout << "\n\n*** Test des setteurs : \n\n";
    p->setNom(nom);
    p->setX(x);
    p->setY(y);
    p->afficher(cout);

    cout << "\n\n*** Test des getteurs : \n\n" << p->getNom() << ", " << p->getX() << ", " << p->getY();

    cout << "\n\n*** Test saisie valeur d'un point : \n\n";
    p->saisir(cin);
    p->afficher(cout);
}

int main(int argc, char** argv) {

    string nom;
    int x;
    int y;
    cout << "Nom de votre point : ";
    cin >> nom;
    cout << "Valeur de x : ";
    cin >> x;
    cout << "Valeur de y : ";
    cin >> y;

    cout << "\n\n*** Initialisation des test de la classe Point...\n\n";
    testClassePointDyniamique(nom, x, y);
    
    return 0;
    
}

