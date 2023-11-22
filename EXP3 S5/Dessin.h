#ifndef DESSIN_H
#define DESSIN_H
#include<vector>
#include"Figure.h"

class Dessin  {

   vector<Figure*> t;

  public:

 void ajouteFigure(const Figure & fig){

    t.push_back(fig.copie());
}
  void affiche()const
{
    for(int j=0; j<t.size(); j++){
        t[j]->affiche();
    }
}
  ~Dessin(){
      cout<<"destructeur dessin"<<endl;


          t.clear();
  }

};

#endif
