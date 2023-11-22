#include"class livre.h"

 classlivre::classlivre(string a,string b,int c,bool d){
      titre=a;
      auteur=b;
      page=c;
      bestseller=d;

 }
 classlivre::classlivre(const classlivre &p):classlivre(p.titre,p.auteur,p.page,p.bestseller){
 }
 classlivre::~classlivre(){
 }
 float classlivre::calculer_prix(){
     if(bestseller == true)
        return (page*0.3)+50;
     else
        return page*0.3;
 }
  void classlivre::afficher(){
  cout<< "titre = " << titre <<"\n" ;
  cout<< "auteur = " << auteur <<"\n" ;
  cout<< "Nombre de page = "<< page <<"\n" ;
   if(bestseller == true)
       cout<< "bestseller : oui "<<"\n" ;
     else
       cout<< "bestseller : non "<<"\n" ;
  }
