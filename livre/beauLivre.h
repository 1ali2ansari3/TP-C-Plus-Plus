#ifndef BEAULIVRE_H
#define BEAULIVRE_H

#include"livre.h"

class beauLivre : public livre{

  public:
   beauLivre(string,string,int,bool);
   beauLivre(const beauLivre &p);
   virtual~beauLivre();
   float calculer_prix();
    void afficher();
};
#endif
