#ifndef PARAMETRES_H
#define PARAMETRES_H
#include <string>
#include "Theme.h"
#include "Joueur.h"

class Parametres {
private:
    Theme theme;
    Joueur * joueur;
public:
    Parametres(std::string intituleTheme="Par defaut");

    ~Parametres();
    Theme &getTheme();
    void setTheme(Theme theme);
    Joueur * getJoueur();
    void setJoueur(Joueur joueur);
    void afficher();
};

#endif /* PARAMETRES_H */
