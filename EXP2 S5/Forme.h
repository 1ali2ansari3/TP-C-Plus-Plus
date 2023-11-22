#ifndef FORME_H
#define FORME_H

#include <iostream>
using namespace std;
#include <cmath>
#define pi M_PI
class Forme
{

public:

    virtual void description()
    {
        cout<<"Ceci est une Forme !"<<endl;
    }
    virtual double aire()= 0;

};

#endif
