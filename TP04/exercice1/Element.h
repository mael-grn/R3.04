#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include "Usager.h"
class Element {
private:
    std::string nom;

    const Usager *proprietaire;

public:
    Element(const std::string & nom, const Usager &proprietaire);
    ~Element();
    const std::string & getNom();
    void setNom(const std::string & nom);
    const Usager* & getProprietaire();
    void setProprietaire(const Usager* & proprietaire);
    virtual unsigned int getTaille()=0;
    virtual const std::string & getDateModification()=0;
    void setDateModification(const std::string & date);
    virtual void afficher();
    virtual void ajouter(Element* element)=0;
};

#endif /* ELEMENT_H */

