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
        entierContraint->saisir(cin);
        cout << "Echec : pas d’exception levée)" << endl ;
    }
    catch (char const * erreur) {
        cout << "Succès : exception levée : " << erreur << endl ;
    }
    return 0;
}

