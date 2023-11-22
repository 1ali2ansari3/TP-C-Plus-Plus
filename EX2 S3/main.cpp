#include"Voiture.h"

int main()
{
   Voiture v1("1234-A-50","Marqx",2007,15000,4);
   v1.afficher();
   Voiture v2(v1);
   v2.afficher();
   v1.setPrixHT(2000);
   cout<< v1.getPrixTTC()<<endl;
    v1.afficher();

}
