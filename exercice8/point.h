#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std ;

class point{
  private:
    int x ;
    int y ;
  public :
   point();
   ~point();
   point(int,int);
   point(const point &p);

   void deplace(int,int);
   void affiche();
   int getX();
   void setX(int val);
    int getY();
   void setY(int val);
};

#endif

