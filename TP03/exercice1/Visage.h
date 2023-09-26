#ifndef VISAGE_H
#define VISAGE_H

#include "AttributsVisage.h"
#include <vector>

// A COMPLETER (spécifiez les attributs)

class Visage {
public:
    Visage(int longueurNez, const Ethnie &uneEthnie);
    void setMoustache(int largeur);
    void addBouton(int diametre);
    void setChapeau(const Chapeau &unChapeau);
    void addBijou(const Bijou &unBijou);

    const Visage &operator=(const Visage &unVisage);
    Visage(const Visage &unVisage);
    ~Visage();

    // fonction amie : aura accès aux attributs "private"  de la classe Visage (pour éviter d'écrire les getters)
    // attention ce n'est pas une méthode !
    friend std::ostream &operator<<(std::ostream &sortie, const Visage &visage);

private:
    std::vector<Bijou const *> bijou;
    std::vector<Bouton *> boutons;
    Nez nez;
    Ethnie const &ethnie;
    Moustache * moustache;
    Chapeau const * chapeau;
};

#endif /* VISAGE_H */

