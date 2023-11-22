#include <iostream>
using namespace std;

#include"point.h"
int main()
{
   point a(5,2);
   a.affiche();
   a.deplace(-2,4);
   a.affiche();
   point b(1,-1);
   b.affiche();

}
