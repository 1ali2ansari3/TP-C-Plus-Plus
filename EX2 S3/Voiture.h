#ifndef VOITURE_H
#define VOITURE_H

#include"Vehicule.h"

class Voiture: public Vehicule {

  private:
    static int nbv;
    int nbrePlace;
  public:
    Voiture(char*,char*,int,float,int);
    Voiture(const Voiture &p);
    ~Voiture(){ cout << "-- le nombre de voiture  " << --nbv<< " objets\n" ;}
    void afficher();


};


#endif

