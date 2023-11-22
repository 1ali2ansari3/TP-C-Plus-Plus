#include"complexe.h"


 complexe::complexe(double n,double x){
   re=n;
   im=x;
}
 complexe::complexe(complexe &ch){
   re=ch.re;
   im=ch.im;
 }
 complexe::~complexe(){
    cout << "Destructeur…\n" ;
 }
 ostream& operator<<(ostream& o ,const complexe& ch){
        o<<ch.re<<"+i"<<ch.im;

 }
 complexe operator+(complexe p,float n){

  complexe temp;
  temp.re= p.re + n;

  return temp;
 }
 complexe operator+(complexe p1,complexe p2){
 complexe temp;
 temp.re= p1.re + p2.re;
 temp.im= p1.im + p2.im;
 return temp;
 }

 complexe operator+(float n,complexe p){
  complexe temp;
  temp.re= p.re + n;
  return temp;
}

 int complexe::operator==(complexe &ch){
     if((re==ch.re)&&(im==ch.im)){
        return 1;
     }
   return 0;
 }
  complexe complexe::operator+=(complexe &p){
  re= re + p.re;
  im= im + p.im;
  return *this;
  }
  complexe complexe::operator-=(complexe &p){
  re= re - p.re;
  im= im - p.im;
  return *this;
  }
  complexe complexe::operator+=(float n){
  re= re + n;
  return *this;
  }
  complexe complexe::operator-=(float n){
   re= re - n;
   return *this;
  }
  complexe operator*(complexe p1,complexe p2){
  complexe temp;
  temp.re=(p1.re*p2.re)- (p1.im*p2.im) ;
  temp.im=(p1.re*p2.im)+ (p1.im*p2.re);
  return temp;
 }
   complexe operator/(complexe p1,complexe p2){
  complexe temp;
  temp.re=((p1.re*p2.re)+(p1.im*p2.im))/((p2.re*p2.re)+(p2.im*p2.im));
  temp.im=((p1.im*p2.re)+(p1.re*p2.im))/((p2.re*p2.re)+(p2.im*p2.im));
  return temp;
 }

  complexe complexe::operator/=(complexe &p2){

  re=((re*p2.re)+(im*p2.im))/((p2.re*p2.re)+(p2.im*p2.im));
  im=((im*p2.re)+(re*p2.im))/((p2.re*p2.re)+(p2.im*p2.im));
  return *this;
  }


