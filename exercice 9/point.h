#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std ;

class point{
  static int n;
    int x ;
    int y ;
  public :
   point();
   ~point();
   point(int,int);
   point(const point &p);

   void deplace(int,int);
   void affiche()const;
   int getX()const;
   void setX(int);
   int getY()const;
   void setY(int val);
   static int getNombre();
};

#endif
