#include"ContactSal.h"


int main()
{
    int n;
    cout<<"donne age";
    cin>>n;
    char *c;
    c= new char;
    cout<<"donne Nom_contact";
    cin>>c;
    contact a(c,n);
    a.afficher();
    contact b("ali",20);
    b.afficher();

    a.setAge(40);
    a.setMessage("bonjour");
    a.afficher();

    ContactSal D("ali",20,123,1500),F(c,n,213,1567);
    D.afficher();
    D.setMessage("bonjour");
    D.setAge(40);
    D.setBonContact();
    D.CalculSalaire();
    D.afficher();


   cout<<F;

   cout<<a;
}
