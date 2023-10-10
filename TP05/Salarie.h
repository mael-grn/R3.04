#ifndef SALARIE_H
#define	SALARIE_H

#include <string>
#include <iostream>
#include "SalarieException.h"
#include "ObjetContraint.h"
#include <map>

class Salarie {
public:
    // A COMPLETER : Spécifier les méthodes d'instance d'un Salarie
    
    // Fourni : Constantes de Classe
    static const float                 SMIC;
    static const float                 COEFF_SMIC;
    static const std::string           NOM_DEF;
    static const std::string           NUMERO_SS_DEF;
    static const std::map<float,float> TRANCHES_IMPOT;

private:
    // A COMPLETER : déclarer les attributs d'instance d'un Salarie
};

#endif	/* SALARIE_H */

