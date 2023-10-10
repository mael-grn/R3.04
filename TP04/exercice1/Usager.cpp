#include "Usager.h"
#include <string>
#include <iostream>

Usager::Usager(std::string login, std::string groupe) {
    this->login = login;
    this->groupe = groupe;
}
Usager::~Usager() {}

std::string Usager::getGroupe() {return this->groupe;}

std::string Usager::getLogin() {return this->login;}

void Usager::afficher() const {
    std::cout << this->login << "(groupe : " << this->groupe << ")";
}

