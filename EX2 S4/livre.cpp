#include"livre.h"

livre::livre(string a,string b,int c,bool d)
{
    titre=a;
    auteur=b;
    page=c;
    bestseller=d;

}
livre::livre(const livre &p):livre(p.titre,p.auteur,p.page,p.bestseller)
{
}
livre::~livre()
{
}
float livre::calculer_prix()
{
    if(bestseller == true)
        return (page*0.3)+50;
    else
        return page*0.3;
}
void livre::afficher()
{
    cout<< "titre = " << titre <<"\n" ;
    cout<< "auteur = " << auteur <<"\n" ;
    cout<< "Nombre de page = "<< page <<"\n" ;
    if(bestseller == true)
        cout<< "bestseller : oui "<<"\n" ;
    else
        cout<< "bestseller : non "<<"\n" ;

    cout<<"prix : "<<calculer_prix()<<endl;
}

