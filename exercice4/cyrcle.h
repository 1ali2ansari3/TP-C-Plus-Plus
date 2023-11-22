#ifndef CYRCLE_H
#define CYRCLE_H

#include<iostream>
using namespace std ;

class cyrcle {
  private:
    int x ;
    int y ;
    int r ;
  public:
   cyrcle(){ x=0; y=0; r=0;}
   ~cyrcle(){ cout << "--Appel Destructeur \n" ; }
   cyrcle(int);
   cyrcle(int ,int ,int);
   cyrcle(const cyrcle &p);
   int getX();
   void setX(int val);
   void affiche();
   void setCeentre(double x, double y);
   double surface();
   bool estInterieur(double tx, double ty);
};

#endif
