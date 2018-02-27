#ifndef VISITOR_H
#define VISITOR_H

#include "Component.h"

class Visitor {
public:
    virtual void visitIceCream(IceCream*) = 0;
    virtual void visitBiscuit(Biscuit*) = 0;
};

class DoubleFillingVisitor : public Visitor {
public:
    void visitIceCream(IceCream*);
    void visitBiscuit(Biscuit*);
};

class ShowFillingVisitor : public Visitor {
public:
    void visitIceCream(IceCream*);
    void visitBiscuit(Biscuit*);
};

#endif //VISITOR_H
