#include "ObjetContraint.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // A COMPLETER : Testez ici le template ObjetContraint<T>
    ObjetContraint<int> oc(10, 5, 20) ;
    cout << "lecture d'un entier constraint : ";
    cin >> oc;
    cout << "affichage de l'entier constraint : " << oc;
    int i = int(oc);
    cout << "\naffichage de l'entier constraint convertit en int : " << i;
    cout <<"\n\nTest d'affectation d'un int à un entier constraint (ec=i) : \n...";
    i = 10;
    oc = 10;
    cout << "\nNouvelle valeur de ec : " << oc;
    return 0;
}

