#include"cylindre.h"



   cylindre::cylindre(int abs, int ord ,int rr, int hh):cercle(abs,ord,rr) { h=hh;}
   cylindre::cylindre(const cylindre &p):cercle(p){  h=p.h;}
   cylindre::cylindre(int hh){h=hh;}
    void cylindre::affiche() {
        cercle::affiche();
        cout<< "hauteur = " << h << "\n" ;
        }
    double cylindre::surface(){
        double n;
        n=cercle::surface();
        return n*h;

    }
