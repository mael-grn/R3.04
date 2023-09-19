#ifndef OBJETCONTRAINT_H
#define OBJETCONTRAINT_H
#include <stdexcept>

template <class T>
class ObjetContraint {

    // A COMPLETER : Spécifiez ici le template de classe ObjetContraint<T>

public:
    ObjetContraint(T val, T min, T max);
    const T& getMin() const;
    const T& getMax() const;
    const T& getMval() const;
    void setVal(const T& val);
    operator T() const;

private:
    T val;
    T min;
    T max;
};

// A COMPLETER : Implémentez ici les méthodes du template ObjetContraint<T> (pas de fichier .cpp pour un template)

#endif /* OBJETCONTRAINT_H */

