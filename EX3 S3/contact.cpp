#include"contact.h"

int contact::compteur = 0;
   contact::contact(char*n,int a){

      Num_contact=++compteur;
      Nom_contact = new char[strlen(n)];
      for(int i=0;i<strlen(n);i++){
        Nom_contact[i]=*(n+i);
      }
      Age_contact=a;

    Message_contact="pas de message";
   }

   void contact::setAge( int a) { Age_contact= a; }

   void contact::setMessage(char *m){
     Message_contact = new char[strlen(m)];
     for(int i=0;i<strlen(m);i++){
        Message_contact[i]=*(m+i);
     }
   }

  void contact::afficher(){
     cout<< "Numero : " << Num_contact << "\n" ;
     cout<< "Nom : " ;
     for(int i=0;i<strlen(Nom_contact);i++){
        cout<<Nom_contact[i];
     }
     cout<<endl;


     cout<<"Age :"<<Age_contact << "\n" ;
      cout<< "Message : " ;
     for(int i=0;i<strlen(Message_contact);i++){
        cout<<Message_contact[i];
     }
     cout<<endl;

 }

  ostream& operator<<(ostream& o ,const contact& ch){

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

 }
