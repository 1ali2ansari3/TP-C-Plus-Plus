#include"policier.h"
#include"beauLivre.h"
int main()
{
    livre A("POO en langage C++" , "F.Mohamed" ,822, true),B("lefou" , "Gogol" ,252, false);
    A.afficher();
   cout<<"prix : "<<A.calculer_prix()<<endl;
    B.afficher();
   cout<<"prix : "<<B.calculer_prix()<<endl;

    beauLivre C("POO en langage C++" , "F.Mohamed" ,822, true);
    C.afficher();
   cout<<"prix : "<<C.calculer_prix()<<endl;

    policier D("lefou" , "Gogol" ,221, false,false);
        D.afficher();
        cout<<"prix : "<<D.calculer_prix()<<endl;

    policier N("lefou" , "Gogol" ,367, true,false);
        N.afficher();
        cout<<"prix : "<<N.calculer_prix()<<endl;



}

