#ifndef CARRE_H
#define CARRE_H

#include"Figure.h"

class Carre : public Figure {
private:
    double a;


  public:
    Carre(){a=0; cout<<"constructeur carre"<<endl;}
    Carre(double l):a(l){ cout<<"constructeur carre"<<endl;}
    ~Carre(){ cout<<"destructeur carre"<<endl;}
    Carre(const Carre &ch):a(ch.a){cout<<"constructeur carre"<<endl;}

    Figure* copie()const{
         return new Carre(*this);
    }
    void affiche()const
    {
        cout<< "a = " << a <<"\n" ;
    }
};

#endif


