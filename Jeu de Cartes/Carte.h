#ifndef CARTE_H
#define CARTE_H

#include <iostream>
using namespace std;

class Carte
{
    int cout1;
public:
    Carte(int co = 0):cout1(co){}
    virtual void affiche()const{
        cout<<"le cout"<<cout1<<endl;
    }
    virtual~Carte(){}
};

#endif

