#include"Roman.h"

Roman::Roman(string a,string b,int c,bool d, bool e):livre(a,b,c,d){
    biographie=e;

 }
 Roman::Roman(const Roman &p):Roman(p.titre,p.auteur,p.page,p.bestseller,p.biographie){
 }
 Roman::~Roman(){}

 void Roman::afficher() {
        livre::afficher();
        if(biographie == true)
       cout<< "biographie : oui "<<"\n" ;
     else
       cout<< "biographie : non "<<"\n" ;
 }
