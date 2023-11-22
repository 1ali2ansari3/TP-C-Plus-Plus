#include"liste.h"

liste::liste(int n){
   max1=n;
   T= new int[max1];
}

 liste::liste(liste &p){
    max1=p.max1;
    T = new int[max1];
    for(int i=0;i<max1;i++){
        T[i]=p.T[i];
 }
}

 liste::~liste(){
    delete [] T;
    cout << "Destructeur…\n" ;
 }
 void liste::saisie(){
     cout<<"donne les nombre de T :"<<endl;
     for(int i=0;i<max1;i++){
        cin >>T[i];
     }
 }
 void liste::affiche(){
     for(int i=0;i<max1;i++){
        cout<<"T["<<i<<"] = "<<T[i]<<endl;
     }
 }

 void liste::operator=(liste &p){
    max1=p.max1;
    delete [] T;
    T = new int[max1];
    for(int i=0;i<max1;i++){
        T[i]=p.T[i];
 }
}
