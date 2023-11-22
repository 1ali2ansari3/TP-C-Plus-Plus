#ifndef LIVRE_H
#define LIVRE_H

#include<iostream>
using namespace std ;
#include<string.h>

class livre{
  private:
 string titre;
 string auteur;
 int page;
 bool bestseller;
  public:
   livre(string,string,int,bool);
   livre(const classlivre &p);
   ~livre();
   float calculer_prix();
    void afficher();

};

#endif
