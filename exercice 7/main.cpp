#include <iostream>

using namespace std;
#include"rectangle.h"
int main()
{
    point c(5,2);
   rectangle a(c,7,3);
   a.affiche();
   cout << a.perimetre()<<endl;
   cout << a.surface()<<endl;
   cout << a.diagonale()<<endl;
   cout << a.doublerDim()<<endl;
   a.deplace(5,5);
   a.affiche();


}
