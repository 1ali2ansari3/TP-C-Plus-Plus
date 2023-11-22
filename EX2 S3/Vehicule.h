#ifndef VEHICULE_H
#define VEHICULE_H

#include<iostream>
using namespace std ;
#include<string.h>
class Vehicule{
  private:
    char *Matricule;
    char *Marque;
    int AnneeModele;
    float PrixHT;
  public:
   Vehicule(char*,char*,int,float);
   Vehicule(const Vehicule &p);
   ~Vehicule();

   virtual void afficher();
   void setPrixHT(float p);
   float getPrixTTC();
};

#endif

