#ifndef DISTRIBUTEUR_H
#define DISTRIBUTEUR_H

#include<iostream>
using namespace std ;


class distributeur{
   private:
    int sommeArgent;
   public:
    distributeur(){ sommeArgent=0;}
    ~distributeur();
    void ajoutePiece(float x);
    void delivreBoisson();

};


#endif
