#include"liste.h"

int main()
{
    liste a(3);
    a.saisie();
    liste b(4);
    b.saisie();
    a.affiche();
    b.affiche();
    liste c;
    c=a;
    c.affiche();
}
