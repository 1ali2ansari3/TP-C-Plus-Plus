#ifndef LIBRAIRIE_H
#define LIBRAIRIE_H
#include<vector>
#include"policier.h"
#include"beauLivre.h"

class librairie{

  private:
     vector<livre*> livres;

  public:

     librairie(){}
     void ajouter_livre(livre*);
     void afficher()const;
     void vider_stock();

};
#endif
