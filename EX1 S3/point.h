#ifndef POINT_H
#define POINT_H

#include<iostream>
using namespace std ;

class point{
  private:
    int x ;
    int y ;
  public :
   point(){x=0;y=0;}
   ~point();
   point(int ,int );
   point(const point &p);

   void deplace(int,int);
   void affiche();
   int getX();
   void setX(int val);
};

#endif
