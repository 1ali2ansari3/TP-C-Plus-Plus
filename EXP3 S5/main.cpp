#include"Cercle.h"
#include"Triangle.h"
#include"Carre.h"
#include"Dessin.h"

void unCercleDePlus(const Dessin& img) {
  Dessin tmp(img);
  tmp.ajouteFigure(Cercle(1));
  cout << "Affichage de 'tmp': " << endl;
  tmp.affiche();
}

int main () {
Dessin dessin;
dessin.ajouteFigure(Triangle(3,4));
dessin.ajouteFigure(Carre(2));
dessin.ajouteFigure(Triangle(6,1));
dessin.ajouteFigure(Cercle(12));


cout << endl << "Affichage du dessin : "<< endl;

dessin.affiche();
}
