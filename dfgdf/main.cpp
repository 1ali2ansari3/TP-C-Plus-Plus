#include <iostream>

using namespace std;


//
//class A{
//
//public:
//  A(){cout<<"A\n";}
//  virtual~A(){cout<<"~A\n";}
//};
//
//class B: public A{
//
//public:
//   B(){cout<<"B\n";}
//   virtual~B(){cout<<"~B\n";}
//};
//class C: public B{
//
//public:
//   C(){cout<<"C\n";}
//   ~C(){cout<<"~C\n";}
//};
//
//



class C{

public:
    virtual void f(void){   cout<<"C\n";  }
    void t(){cout<<"tX\n";}
};


class D : public C{
public:
   void f(int i){           cout<<"C111\n"; }
   void f(const char*s){    cout<<"C222\n";   }
   void t(){cout<<"tY\n";}

};
 int main(){
       D* d = new C; c->f();

}

//class A {
//public:
//    A(){cout<<"CONS A\n";}
//    A(const A &a){cout<<" copi A\n";}
//   virtual~A(){cout<<"~A\n";}
//};
//class B{
//public:
//    B(){cout<<"CONS B\n";}
//    B(const B &b){cout<<" copi B\n";}
//   virtual~B(){cout<<"~B\n";}
//};
//class X :public A {
//public:
//    X(){cout<<"CONS X\n";}
//    X(const X &x){cout<<" copi X\n";}
//   virtual~X(){cout<<"~X\n";}
//};
//class Y :public B {
//public:
//    Y(){cout<<"CONS Y\n";}
//    Y(const Y &y){cout<<" copi Y\n";}
//   virtual~Y(){cout<<"~Y\n";}
//};
//void f(A a){ cout<<"f(A)";}
//void f(A *a){ cout<<"f(A*)";}
//void f(B b){ cout<<"f(B)";}
//void f(B *b){ cout<<"f(B*)";}
//
//
// int main(){    X *x = new X; f(x); delete x;   return 0;}
