#include"policier.h"

policier::policier(string a,string b,int c,bool d,bool e):Roman(a,b,c,d,e){
}

policier::policier(const policier &p):policier(p.titre,p.auteur,p.page,p.bestseller,p.biographie){
}

policier::~policier(){}

float policier::calculer_prix(){

        return (livre::calculer_prix()-10> 0) ? livre::calculer_prix()-10 : 1;


 }
 void policier::afficher() {
        Roman::afficher();

 }
