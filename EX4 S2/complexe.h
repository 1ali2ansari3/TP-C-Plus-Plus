#ifndef COMPLEXE_H
#define COMPLEXE_H

#include<iostream>
using namespace std ;

class complexe{
  private:
    double re;
    double im;

  public :
  complexe(){re=0.0;im=0.0;}
  complexe(double n){ re=n;im=0.0;}
  complexe(double n,double x);
  complexe(complexe &ch);
  ~complexe();
  friend ostream& operator<<(ostream&,const complexe&);
  int operator==(complexe &);
  friend complexe operator+(complexe,float);
  friend complexe operator+(complexe,complexe);
  friend complexe operator+(float,complexe);
  complexe operator+=(complexe &);
  complexe operator-=(complexe &);
  complexe operator+=(float);
  complexe operator-=(float);
  friend complexe operator*(complexe,complexe);
  friend complexe operator/(complexe,complexe);
  complexe operator/=(complexe &);


};

#endif
