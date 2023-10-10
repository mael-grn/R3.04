#include "Salarie.h"
#include "SalarieException.h"
#include <ctype.h>
#include <map>
#include <limits>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// A COMPLETER : Implémenter les méthodes d'instance de la classe Salarie

// Constantes de classe
const float                  Salarie::SMIC          = 1257.0f;
const float                  Salarie::COEFF_SMIC    = 500.0f;
const std::string            Salarie::NOM_DEF       = "Martin";
const std::string            Salarie::NUMERO_SS_DEF = "1234567890123";
const std::map<float, float> Salarie::TRANCHES_IMPOT {
    {  6000.0f, 0.000f},
    { 12000.0f, 0.055f},
    { 26600.0f, 0.140f},
    { 71400.0f, 0.300f},
    {151200.0f, 0.410f},
    {std::numeric_limits<float>::max(), 0.50f} 
};

