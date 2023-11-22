#ifndef CERCLE_H
#define CERCLE_H

#include"Figure.h"

class Cercle : public Figure
{
protected:
    double rayon;
public:
    Cercle()
    {
        rayon=0;
        cout<<"constructeur cercle"<<endl;
    }

    Cercle(double a):rayon(a)
    {
        cout<<"constructeur cercle"<<endl;
    }

    ~Cercle()
    {
        cout<<"destructeur cercle"<<endl;
    }

    Cercle(const Cercle &ch):rayon(ch.rayon)
    {
        cout<<"constructeur cercle"<<endl;
    }

    void description()
    {
        cout<<"Ceci est une cercle !"<<endl;
    }
    double aire()
    {
        return pi*rayon*rayon;
    }

Figure* copie()const;
void affiche()const;


};

#endif

    Figure* Cercle::copie()const
    {
        return new Cercle(*this);
    }

  void Cercle::affiche()const
    {

    cout<< "rayon = " << rayon <<"\n" ;

    }
