#ifndef OBJETCONTRAINT_H
#define OBJETCONTRAINT_H
#include <stdexcept>

template <class T>
class ObjetContraint {

    // A COMPLETER : Spécifiez ici le template de classe ObjetContraint<T>

public:
    ObjetContraint(T val, T min, T max){val=val; min=min; max=max;}
    const T& getMin() const{return min;}
    const T& getMax() const{return max;}
    const T& getMval() const{return val;}
    void setVal(const T& valeur){this->val = valeur;}
    operator T() const{return val;}

private:
    T val;
    T min;
    T max;
};

// A COMPLETER : Implémentez ici les méthodes du template ObjetContraint<T> (pas de fichier .cpp pour un template)

#endif /* OBJETCONTRAINT_H */

