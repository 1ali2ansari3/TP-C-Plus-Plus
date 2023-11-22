#include"cercle.h"
#include <cmath>
#define pi M_PI

   cercle::cercle(int abs, int ord ,int rr):point(abs,ord) { r=rr;}
   cercle::cercle(const cercle &p):point(p){  r=p.r;}
   cercle::cercle(int rr){r=rr;}
    void cercle::affiche() {
        point::affiche();
        cout<< "rayon = " << r << "\n" ;
        }


    double cercle::surface(){
      return pi*r*r;
    }

    bool cercle::estInterieur(double tx, double ty){
             bool va = false;
        if( (tx*tx)+(ty*ty)<=r*r ){
          va=true;
        }

          return va;
    }
