#ifndef DISTRIBUTEURMULTI_H
#define DISTRIBUTEURMULTI_H

#include<iostream>
using namespace std ;
#include"distributeur.h"

class distributeurMulti : public distributeur{
   private:
    int ntypeb;
    int  typechois ;
   public:
    distributeurMulti():distributeur(){ ntypeb=1; typechois=0; }
    distributeurMulti(int n):distributeur(){ ntypeb = n; typechois=0; }
    ~distributeurMulti();
    void selection(int t);
    void delivreBoisson();

};


#endif

