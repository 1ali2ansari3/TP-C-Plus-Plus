#ifndef CLASSLIVRE_H
#define CLASSLIVRE_H

#include<iostream>
using namespace std ;
#include<string.h>

class classlivre{
  private:
 string titre;
 string auteur;
 int page;
 bool bestseller;
  public:
   classlivre(string,string,int,bool);
   classlivre(const classlivre &p);
   ~classlivre();
   float calculer_prix();
    void afficher();

};

#endif
