#ifndef REPERTOIRE_H
#define REPERTOIRE_H
#include "Element.h"
#include <string>
#include <iostream>
#include "Usager.h"
#include <vector>
class Repertoire : public Element {

private:
    std::vector<Element *> contenu;
    static const std::string defDate;
public:
    Repertoire(const std::string & nom, const Usager &proprietaire);
    ~Repertoire();
    unsigned int getTaille() override;
    const std::string & getDateModification() override;
    void ajouter(Element* element) override;
    void afficher() override;
};

#endif /* REPERTOIRE_H */

