#include"point3D.h"

       point3D::point3D(int abs, int ord , int arc) {x = abs ; y = ord ; z= arc;}
       point3D::point3D(const point3D &p){ x=p.x; y=p.y; z=p.z;}
  void point3D::affiche() { cout << "( " << x << " , " << y <<" , "<< z << " )"<<"\n" ; }
  void point3D::compaare(const point3D &p1 ,const point3D &p2){
       if( p1.x== p2.x && p1.y== p2.y && p1.z== p2.z){
        cout << "les deux point sont égaux"<<endl ;
       }
       else
        cout << "les deux point ne sont pas égaux"<<endl ;
  }



