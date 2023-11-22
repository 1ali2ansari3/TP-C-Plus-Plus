#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"Forme.h"

class Triangle : public Forme {
private:
    double base;
    double hauteur;

  public:

      Triangle(double a,double b):base(a),hauteur(b){}

   void description(){
    cout<<"Ceci est une Triangle !"<<endl;
   }
   double aire(){
      return (base * hauteur)/2;
   }

};

#endif
