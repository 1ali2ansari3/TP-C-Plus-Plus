#ifndef TRIANGLE_H
#define TRIANGLE_H

#include"Figure.h"

class Triangle : public Figure {
private:
    double base;
    double hauteur;

  public:
       Triangle(){base=0; hauteur=0; cout<<"constructeur Triangle"<<endl;}
      Triangle(double a,double b):base(a),hauteur(b){cout<<"constructeur Triangle"<<endl;}

      ~Triangle(){cout<<"destructeur Triangle"<<endl;}
      Triangle(const Triangle &ch):base(ch.base),hauteur(ch.hauteur){cout<<"constructeur Triangle"<<endl;}

   void description(){
    cout<<"Ceci est une Triangle !"<<endl;
   }
   double aire(){
      return (base * hauteur)/2;
   }
   Figure* copie()const{
         return new Triangle(*this);
    }
     void affiche()const{

        cout<< "base = " << base <<"\n" ;
        cout<< "hauteur = " << hauteur <<"\n" ;

    }

};

#endif


