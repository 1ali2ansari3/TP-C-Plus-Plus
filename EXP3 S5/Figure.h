#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
using namespace std;
#include <cmath>
#define pi M_PI
class Figure
{

public:
    Figure(){}
    virtual void affiche()const = 0;
    virtual Figure* copie()const = 0;
    virtual~Figure(){}

};

#endif
