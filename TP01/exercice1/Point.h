// Les 2 directives ci-cessous permettent d'éviter les problèmes d'inclusions multiples d'une même classe
#ifndef POINT_H
#define POINT_H


// On inclut les librairies utilisées dans le fichier
#include <iostream>
#include <string>
// Attention : pas de clause "using namespace" dans un fichier ".h" !

class Point {

    // A COMPLETER - Spécifier la classe Point
private:
    std::string nom;
    int x;
    int y;
    static std::string const NOM_DEF;
    static int const X_DEF;
    static int const Y_DEF;
public:
    Point(std::string nom = NOM_DEF, int x = X_DEF, int y = Y_DEF);
    std::string getNom() const;
    void setNom(std::string nom);
    int getX() const;
    void setX(int x);
    int getY() const;
    void setY(int y);
    void saisir(std::istream & entree);
    void afficher(std::ostream & sortie);

};

#endif /* POINT_H */

