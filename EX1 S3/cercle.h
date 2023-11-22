#ifndef CERCLE_H
#define CERCLE_H

#include"point.h"


class cercle: public point {
   private:
    int r;
   public:
   cercle():point(0,0){ r=0; }
   virtual~cercle(){ cout << "--Appel Destructeur \n" ; }
   cercle(int);
   cercle(int ,int ,int);
   cercle(const cercle &p);

   void affiche();
   double surface();
   bool estInterieur(double tx, double ty);
};


#endif
