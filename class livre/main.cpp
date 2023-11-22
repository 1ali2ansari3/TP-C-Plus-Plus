#include"class livre.h"

int main()
{
    classlivre A("POO en langage C++" , "F.Mohamed" ,822, true),B("lefou" , "Gogol" ,252, false);
    A.afficher();
   cout<<"prix : "<<A.calculer_prix()<<endl;
    B.afficher();
   cout<<"prix : "<<B.calculer_prix()<<endl;
}
