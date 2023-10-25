#ifndef OBJETCONTRAINT_H
#define OBJETCONTRAINT_H
#include <stdexcept>

template <class T>
class ObjetContraint {

public:
    ObjetContraint(T val, T min, T max){this->val=val; this->min=min; this->max=max;}
    const T& getMin() const{return this->min;}
    const T& getMax() const{return this->max;}
    const T& getMval() const{return this->val;}
    void setVal(const T& valeur){this->val = valeur;}
    operator T() const{return this->val;}
    ObjetContraint& operator=(T val) {this->setVal(val); return *this;}
private:
    T val;
    T min;
    T max;
};
#endif /* OBJETCONTRAINT_H */

