#ifndef LIVRE_H
#define LIVRE_H

#include<iostream>
using namespace std ;
#include<string.h>

class livre{
  protected:
 string titre;
 string auteur;
 int page;
 bool bestseller;
  public:
   livre(string,string,int,bool);
   livre(const livre &p);
   virtual~livre();
   float calculer_prix();
   virtual void afficher();
};
#endif

