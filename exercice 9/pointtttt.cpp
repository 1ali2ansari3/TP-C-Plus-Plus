#include"point.h"

    int point::n=0;

    point::point(int abs, int ord) {x = abs ; y = ord ; cout << "++ construction : il y a maintenant " <<++n<< " objets\n" ;}
    point::~point() { cout << "-- destruction : il reste maintenant " << --n<< " objets\n"; }
    point::point(const point &p){ x=p.x; y=p.y;}
    void point::deplace(int dx, int dy) { x += dx; y += dy; }
    void point::affiche()const { cout << "( " << x << " , " << y << " )"; }
    int  point::getX()const {  return x; }
    void point::setX( int v) { x= v; }
    int  point::getY()const {  return x; }
    void point::setY( int v) { x= v; }
    int point::getNombre(){return n;}
