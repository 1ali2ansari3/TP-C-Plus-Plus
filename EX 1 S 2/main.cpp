#include"pileEntier.h"


int main()
{
    PileEntiers a,b(40);
    PileEntiers *ad;
    ad=new PileEntiers();

    a<9;
    a>9;
    b.Emplier(5);
    b.Emplier(8);
    b.affiche();
    a.Emplier(5);
    a.Emplier(8);
    a.affiche();
    ad->Emplier(5);
    ad->Emplier(8);
    ad->affiche();
    PileEntiers c=a;
    c.affiche();
}
