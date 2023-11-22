#include <iostream>
using namespace std;

#include"cyrcle.h"



int main()
{
    cyrcle a(5),b(7),c(10);
    a.setCeentre(1,1);
    b.setCeentre(1,1);
    c.setCeentre(1,1);
    a.affiche();
    b.affiche();
    c.affiche();

    cout<<a.surface()<<endl;
    cout<<b.surface()<<endl;
    cout<<c.surface()<<endl;

    if(a.estInterieur(321.3,221.123))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;

         if(b.estInterieur(321,221))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;

         if(c.estInterieur(321,221))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;

}
