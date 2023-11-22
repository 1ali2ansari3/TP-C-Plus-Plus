#include"librairie.h"

int main()
{

    librairie l;
    l.ajouter_livre(new policier("lefou", "Gogol",221, false,false));
    l.ajouter_livre(new beauLivre("lefou", "Gogol",12, false));
    l.ajouter_livre(new Roman("lefou", "Gogol",12, false,true));
     l.afficher();
     cout<<"------------------------------------------------------------"<<endl;

    l.vider_stock();
    l.ajouter_livre(new Roman("lefou", "Gogol",12, false,true));
    l.afficher();


}
