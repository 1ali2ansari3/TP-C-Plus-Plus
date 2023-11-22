#include"distributeurMulti.h"

    distributeurMulti::~distributeurMulti(){}

   void distributeurMulti::selection(int t){
        if(t<1 || t>ntypeb){
            cout<<"Erreur une selection"<<endl;
        }
        else{
            typechois=t;
        }
    }
  void distributeurMulti::delivreBoisson(){
      if(typechois==0){
       cout<<"selectionnez une boisson"<<endl;
      }
      else{
            distributeur::delivreBoisson();

            cout<<"TYPE : " <<typechois<<endl;

            typechois=0;
      }
}



