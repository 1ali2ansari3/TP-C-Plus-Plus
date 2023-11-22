#ifndef CHAINE_H
#define CHAINE_H

#include<iostream>
using namespace std ;

class chaine{
  private:
    char *T;
    int  longeur;

  public :
  chaine(){ longeur=0; T= new char[1];}
  chaine(const char *texte);
  chaine(const chaine &ch);
  ~chaine();
  void affiche();
  void operator=(chaine &ch);
  int operator==(chaine &ch);
  chaine& operator+(chaine ch);
  char& operator[](int i);

};

#endif
