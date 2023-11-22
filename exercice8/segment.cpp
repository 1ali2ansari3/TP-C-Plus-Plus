#include"segment.h"


    segment::segment(point abs, point ord):P1(abs),P2(ord) {}
    segment::~segment(){ cout << " Destructeur …\n" ;}


    void segment::affiche(){cout <<"segment [ A";
    P1.affiche();
    cout<< "; B" ;
    P2.affiche();
    cout<<" ]"<< endl; }

    point segment::getP1() {  return P1; }
    void segment::setP1(point v) { P1= v; }
    point segment::getP2() {  return P2; }
    void segment::setP2( point v) { P2= v; }
    double segment::langueur(){
      double X1=P1.getX()-P2.getX();
      double Y2=P1.getY()-P2.getY();

       return sqrt(X1*X1 + Y2*Y2);

    }
    double langeuu(point P1,point P2){
      double X1=P1.getX()-P2.getX();
      double Y2=P1.getY()-P2.getY();

       return sqrt(X1*X1 + Y2*Y2);

}
    bool segment::appartient(const point &M){

      double L=langeuu(P1,M);
      double H=langeuu(P2,M);

      return H+L==langueur();
     }
