#include <iostream>

using namespace std;

#include"point3D.h"

int main()
{
    point3D a(3,4,5) , b(6,2,1) , c(3,4,5);

    a.affiche();
    b.affiche();
    c.affiche();
    a.compaare(a,b);
    a.compaare(a,c);
}
