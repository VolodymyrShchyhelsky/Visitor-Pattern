#include "Client.h"
#include <bits/stdc++.h>

using namespace std;

void Application::doubleFilling() {
    DoubleFillingVisitor* df = new DoubleFillingVisitor();
    for (Desert* x : listofdesert){
        x->accept(df);
    }
}

void Application::showFilling() {
    ShowFillingVisitor* sf = new DoubleFillingVisitor();
    int it=1;
    for (Desert* x : listofdesert){
        cout<<it;
        ++it;
        x->accept(sf);
    }
}
