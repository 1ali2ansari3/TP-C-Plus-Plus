#ifndef POINT3D_H
#define POINT3D_H

#include<iostream>
using namespace std ;

class point3D {
  private:
    double x ;
    double y ;
    double z ;
  public:
   point3D(){ x=0; y=0; z=0;}
   ~point3D(){ cout << " Destructeur …\n" ;}
   point3D(int ,int ,int );
   point3D(const point3D &p);

   void affiche();
   void compaare(const point3D &p1 ,const point3D &p2);

};

#endif

