#include"rectangle.h"
#include <cmath>

          point::point(int abs, int ord) {x = abs ; y = ord ;}
          point::~point() { cout << " Destructeur …\n" ;}
          point::point(const point &p){ x=p.x; y=p.y;}
     void point::deplace(int dx, int dy) { x += dx; y += dy; }
     void point::affiche() { cout << "( " << x << " , " << y << " )"<<"\n" ; }
      int point::getX() {  return x; }
     void point::setX( int v) { x= v; }

          rectangle::rectangle( const point &a, double arc , double abc) { point P(a);  longueur = arc; largeur = abc;}
          rectangle::rectangle(const rectangle &p){ P=p.P; longueur=p.longueur; largeur=p.largeur;}
     void rectangle::affiche(){ affiche() ; cout << " )"<< "  longueur =" << longueur << "  largeur =" << largeur << "\n" ; }
   double rectangle::perimetre(){ return 2*( longueur + largeur);}
   double rectangle::surface(){   return longueur * largeur; }
   double rectangle::diagonale(){ return sqrt(longueur * longueur + largeur * largeur); }
   double rectangle::doublerDim(){return 2*(longueur + longueur)*(largeur + largeur); }
     void rectangle::deplace(int a, int b) { deplace(a,b); }


