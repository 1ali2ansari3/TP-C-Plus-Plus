#ifndef CONTACTSAL_H
#define CONTACTSAL_H

#include"contact.h"

class ContactSal: public contact{
  protected :
   int Matricule;
   float salaire;
   bool bonContact;
  public :

    ContactSal(char *n,int a,int M, float S);
    void setBonContact();
    float CalculSalaire();
    void afficher();
    friend ostream& operator<<(ostream&,const ContactSal&);

};


#endif
