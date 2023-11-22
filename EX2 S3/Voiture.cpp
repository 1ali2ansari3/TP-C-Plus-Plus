#include"Voiture.h"

int Voiture::nbv= 0 ;

    Voiture::Voiture(char*abs,char*ord,int n,float f,int p):Vehicule(abs,ord,n,f){  nbrePlace=p;
    cout << "++ le nombre de voiture  " << ++nbv<< " objets\n" ;}
    Voiture::Voiture(const Voiture &p):Vehicule(p){ nbrePlace=p.nbrePlace; cout << "++ le nombre de voiture  " << ++nbv<< " objets\n" ; }
     void Voiture::afficher(){
        Vehicule::afficher();
        cout<< "nbrePlace = " << nbrePlace << "\n" ;
    }
