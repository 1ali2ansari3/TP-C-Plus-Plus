#include"point.h"



    point::point(int abs, int ord) {x = abs ; y = ord ;}
    point::~point() { cout << " Destructeur …\n" ;}
    point::point(const point &p){ x=p.x; y=p.y;}
    void point::deplace(int dx, int dy) { x += dx; y += dy; }
    void point::affiche() { cout << "( " << x << " , " << y << " )"<<"\n" ; }
    int  point::getX() {  return x; }
    void point::setX( int v) { x= v; }





