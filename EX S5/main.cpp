#include"Cercle.h"

 void affichageDesc(Forme&f){

  f.description();

}

int main()
{
    Forme f;
    Cercle c;
    f.description();
    c.description();


    affichageDesc(f);
    affichageDesc(c);



}
