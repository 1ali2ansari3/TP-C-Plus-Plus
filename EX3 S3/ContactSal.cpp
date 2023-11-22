#include"ContactSal.h"


  ContactSal::ContactSal(char *n,int a,int M, float S):contact(n,a){
      Matricule=M;
      salaire = S;
      bonContact = false;
  }
 void ContactSal::setBonContact(){
      bonContact = true;
  }
 float ContactSal::CalculSalaire(){
  if(bonContact = true){
    salaire=salaire+(0.1*salaire);
  }
  return salaire;
 }
 void ContactSal::afficher(){
      contact::afficher();
      cout<<"Matricule :"<<Matricule << "\n" ;
      cout<<"salaire :"<<salaire << "\n" ;
      if(bonContact){
      cout<<"Est un bon contact : oui"<<"\n" ;
      }
      else{
      cout<<"Est un bon contact : non"<<"\n" ;
      }
           cout<<endl;
 }

 ostream& operator<<(ostream& o ,const ContactSal& ch){
        o<< "Numero : " <<ch.Num_contact << "\n" ;
     o<< "Nom : " ;
     for(int i=0;i<strlen(ch.Nom_contact);i++){
        o<<ch.Nom_contact[i];
     }
  o<<endl;


     o<<"Age :"<<ch.Age_contact << "\n" ;
      o<< "Message : " ;
     for(int i=0;i<strlen(ch.Message_contact);i++){
        o<<ch.Message_contact[i];
     }
     o<<endl;
         o<<"Matricule :"<<ch.Matricule << "\n" ;
      o<<"salaire :"<<ch.salaire << "\n" ;
      if(ch.bonContact){
      o<<"Est un bon contact : oui"<<"\n" ;
      }
      else{
      o<<"Est un bon contact : non"<<"\n" ;
      }
           o<<endl;
 }


