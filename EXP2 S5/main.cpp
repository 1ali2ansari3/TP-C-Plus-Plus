#include"Cercle.h"
#include"Triangle.h"
 void affichageDesc(Forme&f){

  f.description();
 cout<<f.aire()<<endl;

}
int main()
{
    Cercle c(5);
    Triangle t(10,2);

    affichageDesc(c);
    affichageDesc(t);
    return 0;

}
