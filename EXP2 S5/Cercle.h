#ifndef CERCLE_H
#define CERCLE_H

#include"Forme.h"

class Cercle : public Forme
{
private:
    double rayon;
public:
    Cercle(double a):rayon(a){};
    void description()
    {
        cout<<"Ceci est une cercle !"<<endl;
    }
    double aire(){
      return pi*rayon*rayon;
    }


};

#endif

