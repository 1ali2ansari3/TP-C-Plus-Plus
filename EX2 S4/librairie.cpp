#include"librairie.h"

void librairie::ajouter_livre(livre *p)
{
    livres.push_back(p);
}
void librairie::afficher()const
{
    for(int j=0; j<livres.size(); j++)
        livres[j]->afficher();


}
void librairie::vider_stock()
{
     for(int j=0; j<livres.size(); j++){
         delete livres[j];
         }
    livres.clear();
}
