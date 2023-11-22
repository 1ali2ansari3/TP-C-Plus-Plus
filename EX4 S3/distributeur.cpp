#include"distributeur.h"

  distributeur::~distributeur(){}

   void distributeur::ajoutePiece(float x){

    sommeArgent += x;
}
 void distributeur::delivreBoisson(){

    if(sommeArgent==5){

        cout<<"voila"<<endl;
        sommeArgent=0;
    }
     else if(sommeArgent<5){

        cout<<"pas assez"<<endl;
    }
    else{
        cout<<"voila , rendu :  "<<sommeArgent-5<<"  saf hahya 3ndi drb dora ta trj3"<<endl;
        sommeArgent=0;
    }


}

