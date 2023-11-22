#ifndef RECTANGLE_H
#define RECTANGLE_H

#include<iostream>
using namespace std ;

class point{
  private:
    int x ;
    int y ;
  public :
   point();
   ~point();
   point(int ,int );
   point(const point &p);

   void deplace(int, int);
   void affiche();
   int getX();
   void setX(int val);
};

class rectangle {
  private:
     point P;
    double longueur ;
    double largeur ;
  public:
   rectangle(){ point P(0,0); longueur=0; largeur=0;}
   ~rectangle(){ cout << " Destructeur …\n" ;}
   rectangle(const point &p,double,double);
   rectangle(const rectangle &p);

   void affiche();
   double perimetre();
   double surface();
   double diagonale();
   double doublerDim();
   void deplace(int,int);
};

#endif
