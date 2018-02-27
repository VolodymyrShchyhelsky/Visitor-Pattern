#include "Visitor.h"
#include <iostream>

using namespace std;

void DoubleFillingVisitor::visitBiscuit(Biscuit* _biscuit) {
    _biscuit->cream*=2;
}

void DoubleFillingVisitor::visitIceCream(IceCream* _icecream) {
    _icecream->ice*=2;
}

void ShowFillingVisitor::visitBiscuit(Biscuit* _biscuit) {
    cout<<" biscuit filling "<<_biscuit->cream<<endl;
}

void ShowFillingVisitor::visitIceCream(IceCream* _icecream) {
    cout<<" icecream filling "<<_icecream->ice<<endl;
}
