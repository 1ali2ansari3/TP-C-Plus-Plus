#ifndef CYLINDRE_H
#define CYLINDRE_H

#include"cercle.h"


class cylindre: public cercle {
   private:
    int h;
   public:
   cylindre():cercle(0,0,0){ h=0; }
   virtual~cylindre(){ cout << "--Appel Destructeur \n" ; }
   cylindre(int);
   cylindre(int ,int ,int,int);
   cylindre(const cylindre &p);

   void affiche();
   double surface();
};


#endif
