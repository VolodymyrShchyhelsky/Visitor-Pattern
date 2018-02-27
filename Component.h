#ifndef COMPONENT_H
#define COMPONENT_H

#include "Visitor.h"

class Desert {
public:
    virtual void accept(Visitor*) = 0;
};

class IceCream : public Desert {
public:
    int ice;
    void accept(Visitor* v);
    IceCream(int _ice) : ice(_ice) {};
};

class Biscuit : public Desert {
public:
    int cream;
    void accept(Visitor* v);
    Biscuit(int _cream) : cream(_cream) {};
};

void IceCream::accept(Visitor* v){
    v->visitIceCream(this);
}

void Biscuit::accept(Visitor* v){
    v->visitBiscuit(this);
}

#endif //COMPONENT_H
