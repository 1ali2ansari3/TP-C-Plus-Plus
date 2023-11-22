#ifndef POLICIER_H
#define POLICIER_H

#include"Roman.h"

class policier : public Roman{

  public:
   policier(string,string,int,bool,bool);
   policier(const policier &p);
   virtual~policier();
   float calculer_prix();
    void afficher();
};
#endif

