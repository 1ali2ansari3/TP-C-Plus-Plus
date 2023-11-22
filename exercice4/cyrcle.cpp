#include"cyrcle.h"
#include <cmath>
#define pi M_PI

   cyrcle::cyrcle(int abs, int ord ,int rr) {x = abs ; y = ord ; r=rr;}
   cyrcle::cyrcle(const cyrcle &p){ x=p.x; y=p.y; r=p.r;}
   cyrcle::cyrcle(int rr){r=rr;}
   int  cyrcle::getX() {  return x; }
   void cyrcle::setX( int v) { x= v; }

   void cyrcle::affiche() { cout << "( " << x << " , " << y << " )"<< "rayon = " << r << "\n" ; }


   void cyrcle::setCeentre(double Cx, double Cy){
     x=Cx;
     y=Cy;
   }
    double cyrcle::surface(){
      return pi*r*r;
    }
    bool cyrcle::estInterieur(double tx, double ty){
             bool va = false;
        if( (x-5 <= tx <= x+r) && (y-r <= ty <= y+r) ){

          va=true;
        }
     cout << boolalpha<< va;
          return va;

    }
