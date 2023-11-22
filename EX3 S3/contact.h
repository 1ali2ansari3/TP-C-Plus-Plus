#ifndef CONTACT_H
#define CONTACT_H

#include<iostream>
using namespace std ;

#include<string.h>
class contact{
  protected:
    int Num_contact;
    char *Nom_contact ;
    int Age_contact ;
    char *Message_contact ;
   public:
    static int compteur ;
    contact(char *n,int a);
    void setAge(int a);
    void setMessage(char *m) ;
    void afficher();
    friend ostream& operator<<(ostream&,const contact&);
};


#endif
