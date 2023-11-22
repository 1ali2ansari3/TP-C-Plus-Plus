#ifndef SEGMENT_H
#define SEGMENT_H


#include"point.h"
#include<cmath>

class segment{

  private:
     point P1,P2;

  public:
   segment(){ point P1(0,0); point P2(0,0);}
   ~segment();
    segment( point , point );
   segment(const segment &p):P1(p.P1),P2(p.P2){}

   void affiche();
   point getP1();
   void setP1(point val);
    point getP2();
   void setP2(point val);
   double langueur();
   bool appartient(const point &M);



};




#endif
