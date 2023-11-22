#include"cylindre.h"


int main()
{
    cercle a(1,2,4),b(3,2,7),c(4,2,10);

    a.affiche();
    b.affiche();
    c.affiche();

    cout<<a.surface()<<endl;
    cout<<b.surface()<<endl;
    cout<<c.surface()<<endl;

    if(a.estInterieur(321,221))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;

         if(b.estInterieur(1,1))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;

         if(c.estInterieur(2,2))
        cout << "interieur"<<endl;
    else
        cout << "exterieur"<<endl;


     cylindre p(1,2,4,5);
     p.affiche();
     cout<<p.surface()<<endl;
}

