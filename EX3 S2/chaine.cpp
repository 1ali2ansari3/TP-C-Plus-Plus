#include"chaine.h"
#include<string.h>

//
 chaine::chaine(const char *texte){
    longeur=strlen(texte);
      T = new char[longeur];
    for(int i=0;i<longeur;i++){
        T[i]=*(texte+i);
 }
}


 chaine::~chaine(){
   delete [] T;
 }


 chaine::chaine( const chaine &ch){
    longeur=ch.longeur;

    T = new char[longeur+1];
    for(int i=0;i<longeur;i++){
        T[i]=ch.T[i];
 }
}



 void chaine::affiche(){
     for(int i=0;i<longeur;i++){
        cout<<T[i];
     }
     cout<<endl;
 }



 void chaine::operator=(chaine &ch){
   delete []T;
   longeur=ch.longeur;
    T = new char[longeur+1];
    for(int i=0;i<longeur;i++){
        T[i]=ch.T[i];
 }
 }
  int chaine::operator==(chaine &ch){
   if(longeur==ch.longeur){
    for(int i=0;i<longeur;i++){
        if(T[i]!=ch.T[i]){ return 0;}
    }
    return 1;
   }
   return 0;
  }


chaine& chaine::operator+(chaine ch){
//       static chaine res;
//    res.longeur = longeur + ch.longeur;
//    res.T = new char[res.longeur+1];
//    for(unsigned int i=0; i!=longeur; i++) res.T[i] = T[i];
//    for(unsigned int i=0; i!=ch.longeur; i++) res.T[i+longeur] = ch.T[i];
//    res.T[res.longeur]='\0';
//    return res;


     static chaine A;
     A.longeur=longeur+ch.longeur;
     A.T= new char[A.longeur+1];
     for( int i=0;i!=longeur;i++){
        A.T[i]=T[i];
      }
     for( int i=0; i!=ch.longeur; i++)
      A.T[i+longeur] = ch.T[i];
      A.T[A.longeur]='\0';
      return A;

}


 char& chaine::operator[](int i){
      static char res='\0';
      if(longeur!=0);
      return T[i];
        }




