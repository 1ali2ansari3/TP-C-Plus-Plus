#ifndef LISTE_H
#define LISTE_H

#include<iostream>
using namespace std ;

class liste{
  private:
    int *T;
    int  max1;

  public :
  liste(){max1=0; T=NULL;}
  liste(int n);
  liste(liste &);
  ~liste();
  void saisie();
  void affiche();
  void operator=(liste &);

};

#endif

