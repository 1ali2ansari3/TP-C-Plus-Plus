#include"pileEntier.h"

 PileEntiers::PileEntiers(int n){
   max1=n;
   adr= new int[max1];
   nbelm = 0;
   cout<< "on a fabrique une adr de" << max1 <<" element\n";
}

 PileEntiers::PileEntiers(PileEntiers &p){
    max1=p.max1;

    adr = new int[max1];
    nbelm = p.nbelm;
    for(int i=0;i<nbelm;i++){
        adr[i]=p.adr[i];
 }
}

 PileEntiers::~PileEntiers(){
    delete adr;
    cout << "Destructeur…\n" ;
 }
  void PileEntiers::affiche(){
    cout<<max1<<endl<<nbelm<<endl;
    for(int i=0;i<nbelm;i++){
      cout<<adr[i]<<endl;
  }
  }
    int  PileEntiers::getmax(){return max1;}
    void PileEntiers::setmax(int v){max1= v;}
    int  PileEntiers::getNelem(){return nbelm;}
    void PileEntiers::setNelem(int v){nbelm= v;}

    bool PileEntiers::Pleine(){
     if(nbelm==max1){
        return 1;
     }
        return 0;
     }

     bool PileEntiers::vide(){
     if(nbelm==0){
        return 1;
     }
     return 0;
     }

    void PileEntiers::Emplier(int i){
        if(!Pleine()){
        *(adr+nbelm)=i;
         nbelm++;
       }
    }
   void PileEntiers::operator<(int x){
       if(!Pleine()){
        *(adr+nbelm++)=x;
       }
   }

   void operator>(PileEntiers T ,int x){
      if(!T.vide()){
         return  *(T.adr+T.nbelm--);
       }
    }
    int PileEntiers::Depiler(){
        if(!vide()){
             return  *(adr+nbelm--);
       }
    }
