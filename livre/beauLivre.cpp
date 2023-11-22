#include"beauLivre.h"

   beauLivre::beauLivre(string a,string b,int c,bool d):livre(a,b,c,d){

 }
   beauLivre::beauLivre(const beauLivre &p):beauLivre(p.titre,p.auteur,p.page,p.bestseller){
 }
   beauLivre::~beauLivre(){}

   float beauLivre::calculer_prix(){
     return livre::calculer_prix()+30;
 }
 void beauLivre::afficher() {
        livre::afficher();
 }
