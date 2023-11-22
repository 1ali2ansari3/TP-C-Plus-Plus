#ifndef ROMAN_H
#define ROMAN_H

#include"livre.h"

class Roman : public livre{
  protected:
 bool biographie;
  public:
   Roman(string,string,int,bool,bool);
   Roman(const Roman &p);
   virtual~Roman();

    void afficher();
};
#endif
