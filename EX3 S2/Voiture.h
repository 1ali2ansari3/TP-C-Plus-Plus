#ifndef VOITURE_H
#define VOITURE_H

#include<Vehicule.h>

class Voiture: public Vehicule {
  private:
    int nbrePlace;
  public:
    Voiture(char*,char*,int,float,int);
    Voiture(const Voiture &p);
    void afficher();


};

#endif
