#include "ObjetContraint.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // A COMPLETER : Testez ici le template ObjetContraint<T>
    /*
    ObjetContraint<int> oc(10, 0, 100) ;
    cout << "affichage de l'entier constraint : " << oc.getMval() << "[" << oc.getMin() << ", " << oc.getMax() << "]\n";
    cout << "lecture d'un entier constraint : ";
    int val;
    cin >> val;
    oc.setVal(val);
    cout << "affichage de l'entier constraint : " << oc.getMval() << "[" << oc.getMin() << ", " << oc.getMax() << "]";
    int i = int(oc);
    cout << "\naffichage de l'entier constraint convertit en int : " << i;
    cout <<"\n\nTest d'affectation d'un int à un entier constraint (ec=i) : \n...";
    i = 10;
    oc = 10;
    cout << "\nNouvelle valeur de ec : " << oc.getMval() << "[" << oc.getMin() << ", " << oc.getMax() << "]";
     */

    cout << "saisir un point \n";
    Point p1;
    p1.saisir();
    Point p2;
    cout << "saisir un autre point superieur au precedent \n";
    p2.saisir();
    while (p2 < p1) {
        cout << "la condition n est pas respectee ! recommencer \n";
        p2.saisir();
    }
    cout << "\nRECTANGLE CREE\n\nSaisir un nouveau point\n";
    Point p3;
    p3.saisir();
    if (p1 < p3 & p3 < p2) {
        cout << "\nVOTRE POINT EST DANS LE RECTANGLE\n\n";
    } else {
        cout << "\nVOTRE POINT N EST PAS DANS LE RECTANGLE\n\n";
    }


    return 0;
}

