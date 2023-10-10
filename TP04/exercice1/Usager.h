#ifndef USAGER_H
#define USAGER_H
#include <string>
#include <iostream>

class Usager {

private:
    std::string login;
    std::string groupe;
public:
    Usager(std::string login, std::string groupe);
    ~Usager();

    std::string getLogin();
    std::string getGroupe();

    void afficher() const;


};


#endif /* USAGER_H */

