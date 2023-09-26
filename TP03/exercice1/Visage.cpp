#include "Visage.h"
#include <iostream>
using namespace std;

// A COMPLETER : IMPLEMENTER LES METHODES DE LA CLASSE VISAGE (ET L'OPERATEUR <<)

Visage::Visage(int longueurNez, const Ethnie &uneEthnie) : nez(longueurNez), ethnie(uneEthnie), moustache(NULL), chapeau(NULL), boutons(NULL), bijou(NULL) {
}

void Visage::setMoustache(int largeur) {
    this->moustache = new Moustache(largeur);
}

void Visage::addBouton(int diametre) {
    boutons.push_back(new Bouton(diametre));
}

void Visage::setChapeau(const Chapeau &unChapeau) {
    this->chapeau = &unChapeau;
}

void Visage::addBijou(const Bijou &unBijou) {
    bijou.push_back(&unBijou);
}

const Visage &Visage::operator=(const Visage &unVisage){
    this->boutons = unVisage.boutons;
    this->bijou = unVisage.bijou;
    this->nez = unVisage.nez;
    this->chapeau = unVisage.chapeau;
    if (this->moustache != NULL) {
        delete this->moustache;
    }
    if (unVisage.moustache != NULL) {
        this->moustache = new  Moustache(unVisage.moustache->getLargeur());
    }
    if (this->boutons.size() > 0) {
        for (auto i : this->boutons) {
            delete i;
        }
        this->boutons.clear();
    }
    if (unVisage.boutons.size() > 0) {
        for (auto i : this->boutons) {
            this->boutons.push_back(new Bouton(i->getDiametre()));
        }
    }
}

Visage::Visage(const Visage &unVisage) : bijou(unVisage.bijou), boutons(unVisage.boutons), nez(unVisage.nez), ethnie(unVisage.ethnie),
moustache(unVisage.moustache), chapeau(unVisage.chapeau){
}

Visage::~Visage() {
    if(moustache != NULL) {
        delete this->moustache;
    }

    if (this->boutons.size() > 0) {
        for (auto i : this->boutons) {
            delete i;
        }
        this->boutons.clear();
    }


}


std::ostream &operator<<(std::ostream &sortie, const Visage &visage) {
    sortie << "\t- " << visage.nez << "\n\t- " << visage.ethnie ;
    if(visage.moustache != NULL) {
        sortie << "\n\t- " << *visage.moustache;
    } else {
        sortie << "\n\t- Pas de moustache";
    }
    if (visage.chapeau != NULL) {
        sortie << "\n\t- " << *visage.chapeau;
    } else {
        sortie << "\n\t- Pas de chapeau";
    }
    sortie << "\n\t- Boutons :";
    if(visage.boutons.size() > 0) {
        for (auto i : visage.boutons) {
            sortie << "\n\t\t* " << *i;
        }
    } else {
        sortie << "\n\t\t* Pas de boutons";
    }

    sortie << "\n\t- bijoux :";
    if(visage.bijou.size() > 0) {
        for (auto i : visage.bijou) {
            sortie << "\n\t\t* " << *i;
        }
    } else {
        sortie << "\n\t\t* Pas de bijoux";
    }
    return sortie;
}