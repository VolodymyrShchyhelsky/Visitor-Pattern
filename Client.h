#ifndef CLIENT_H
#define CLIENT_H

#include "Visitor.h"
//#include "ConcreteVisitors.h"
#include <bits/stdc++.h>

using namespace std;

class Application {
public:
    vector<Desert*> listofdesert;
    void doubleFilling();
    void showFilling();
};

#endif //CLIENT_H
