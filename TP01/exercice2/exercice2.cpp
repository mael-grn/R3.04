#include <cstdlib>
#include "EntierContraint.h"
using namespace std;


int main(int argc, char** argv) {
    
    int min = 10;
    int max = 20;
    int val = 15;

    EntierContraint * entierContraint = new EntierContraint(val, min, max);

    entierContraint->afficher(cout);

    try {
        cout << "Le but de cet exercice est de rentrer une valeur incorrecte, afin de lever une exception : \n";
        entierContraint->saisir(cin);
        cout << "Echec : pas d exception levee" << endl ;
    }
    catch (char const * erreur) {
        cout << "Succes : exception levee : " << erreur << endl ;
    }
    return 0;
}

