#include <iostream>

using namespace std;

#include"segment.h"
#include"point.h"

int main()
{
   point A(1,1),B(2,2);

   segment T(A,B);
   T.affiche();

 segment G(T);
 G.affiche();

 cout<<T.langueur()<<endl;


 point O(1,2);

 if(T.appartient(O)){
    cout<<"appartient"<<endl;

 }
 else{
     cout<<" non appartient"<<endl;
 }

}
