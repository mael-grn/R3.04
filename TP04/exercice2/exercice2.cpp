#include "Parametres.h"

int main() {
    // Afficher les paramètres initiaux
    Parametres * param1 = new Parametres;

    param1->afficher();

    // Instancier un thème intitulé "Urbain" et l'associer aux paramètres
    Theme * theme1 = new Theme("Urbain");
    param1->setTheme(*theme1);
    // Instancier un joueur nommé "Yoloutre" et l'associer aux paramètres
    Joueur * joueur1 = new Joueur("Yoloutre");
    param1->setJoueur(*joueur1);
    // Afficher les nouveaux paramètres
    param1->afficher();

    return 0;
}

/////// TRACE ATTENDUE //////////////////////////////////
//
// Paramètres { Theme: 'Par Défaut', Joueur: 'Anonyme' }
// Paramètres { Theme: 'Urbain', Joueur: 'Yoloutre' }
//
/////////////////////////////////////////////////////////