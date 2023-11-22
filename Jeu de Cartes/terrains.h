#ifndef TERRAINS_H
#define TERRAINS_H

#include"Carte.h"
#include"coulure.h"
class terrains
{
    Couleur C;
public:
    terrains(Couleur C):C(C){cout<<"carte terrains "<<endl;}
    virtual void affiche()const{
        cout << "Un terrain ";
        C.affiche();
        cout << "." << endl;
    }
    virtual~terrains(){}
};

#endif
