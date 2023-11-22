#include"Vehicule.h"

  Vehicule::Vehicule(char*abs,char*ord,int n,float f){
      Matricule = new char[strlen(abs)+1];
      for(int i=0;i<strlen(abs);i++){
        Matricule[i]=*(abs+i);
      }
      Marque = new char[strlen(ord)+1];
      for(int i=0;i<strlen(ord);i++){
        Marque[i]=*(ord+i);
      }
      AnneeModele=n;
      PrixHT=f;
  }

  Vehicule::Vehicule(const Vehicule &p):Vehicule(p.Matricule,p.Marque,p.AnneeModele,p.PrixHT){
//      Matricule = new char[strlen(p.Matricule)];
//      for(int i=0;i<strlen(p.Matricule);i++){
//        Matricule[i]=p.Matricule[i];
//      }
//      Marque = new char[strlen(p.Marque)];
//      for(int i=0;i<strlen(p.Marque);i++){
//        Marque[i]=p.Marque[i];
//      }
//      AnneeModele=p.AnneeModele;
//      PrixHT=p.PrixHT;
  }

  Vehicule::~Vehicule(){
   delete [] Matricule;
   delete [] Marque;
 }

  void Vehicule::afficher(){
     for(int i=0;i<strlen(Matricule);i++){
        cout<<Matricule[i];
     }
     cout<<endl;
      for(int i=0;i<strlen(Marque);i++){
        cout<<Marque[i];
     }
     cout<<endl;
     cout<< "AnneeModele = " << AnneeModele << "\n" ;
     cout<< "PrixHT = " << PrixHT << "\n" ;
 }

  void Vehicule::setPrixHT( float v) { PrixHT= v; }

  float Vehicule::getPrixTTC(){ return PrixHT;}




