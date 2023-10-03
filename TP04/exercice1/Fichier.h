#ifndef FICHIER_H
#define FICHIER_H
#include "Element.h"

class Fichier : public Element{
private:
    std::string date; //au format AAAA-MM-JJ
    unsigned int taille;
public:
    Fichier(const std::string & nom, unsigned int taille, std::string date, const Usager &proprietaire);
    ~Fichier();
    unsigned int getTaille() override;
    void ajouter(Element* element) override;
    const std::string & getDateModification() override;

};

#endif /* FICHIER_H */

