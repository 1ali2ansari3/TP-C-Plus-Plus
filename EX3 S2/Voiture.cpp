 #include<Voiture.h>


    Voiture::Voiture(char*abs,char*ord,int n,float f,int p):Vehicule(abs,ord,n,f){  nbrePlace=f;  }
    Voiture::Voiture(const Voiture &p):Vehicule(p){ nbrePlace=p.nbrePlace }
     void Voiture::afficher(){
        Vehicule::affiche();
        cout<< "PrixHT = " << PrixHT << "\n" ;
    }
