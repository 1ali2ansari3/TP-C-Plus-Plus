#ifndef PILEENTIER_H
#define PILEENTIER_H

#include<iostream>
using namespace std ;

class PileEntiers{
  private:
    int  max1;
    int  *adr;
    int nbelm;
  public :
  PileEntiers(int =100);
  PileEntiers(PileEntiers &);
  ~PileEntiers();
  void affiche();
    int getmax();
   void setmax(int val);
    int getNelem();
   void setNelem(int val);

    void operator<(int i);

   friend void operator>(PileEntiers ,int);
   void Emplier(int i);
    int Depiler();
   bool Pleine();
   bool vide();
};

#endif
