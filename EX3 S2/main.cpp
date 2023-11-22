#include"chaine.h"

int main()
{
   chaine a("ali");
   a.affiche();
   chaine b(a);
   b.affiche();
   chaine c,d("ansari");
   c=a;
   c.affiche();

   if(c==d){
    cout<<"les deux chaie sont egau"<<endl;
   }
   else{
    cout<<"les deux chaie sont different"<<endl;
   }


     chaine s;
      s=a+b;
      a.affiche();
      s.affiche();
}
