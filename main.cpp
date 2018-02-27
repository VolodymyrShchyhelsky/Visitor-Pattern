#include <iostream>
#include "Client.h"

using namespace std;

int main()
{
    int n1,n2,x;
    Application* neworder = new Application();
    cout<<"Enter count of icecream"<<endl;
    cin>>n1;
    for(int i=0; i<n1; ++i) {
        cin>>x;
        neworder->listofdesert.push_back( new IceCream(x) );
    }
    cout<<"Enter count of biscuit"<<endl;
    cin>>n2;
    for(int i=0; i<n2; ++i) {
        cin>>x;
        neworder->listofdesert.push_back( new Biscuit(x) );
    }
    neworder->doubleFilling();
    neworder->showFilling();
    return 0;
}
