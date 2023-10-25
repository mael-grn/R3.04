#include <cstdlib>
#include <iostream>
#include "EntierContraint.h"
using namespace std;

int main(int argc, char** argv) {
    
    // A Compléter
    // Il faut tester operator int, operator << et operator >> sur la classe EntierContraint
    EntierContraint ec(5,0,100) ;
    cout << "lecture d'un entier constraint : ";
    cin >> ec;
    cout << "affichage de l'entier constraint : " << ec;
    int i = int(ec);
    cout << "\naffichage de l'entier constraint convertit en int : " << i;
    cout <<"\n\nTest d'affectation d un int a un entier constraint (ec=i) : \n...";
    i = 10;
    ec = i;
    cout << "\nNouvelle valeur de ec : " << ec;
    //l'entier constraint prend en effet la nouvelle valeur de type in dans sa variable val, mais les valeurs min et max sont totalement changées
    //Ce qu'il se passe, c'est que l'entier constraint prends les valeurs min et max par default, soit les valeur maximum pour un type int
    return 0;
}

