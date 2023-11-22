#include <iostream>
using namespace std;
#include <cmath>
#include<vector>

#define pi M_PI
class Figure
{

public:
    Figure(){}
    virtual void affiche()const = 0;
    virtual Figure* copie()const = 0;
    virtual~Figure(){}

};


class Cercle : public Figure
{
protected:
    double rayon;
public:
    Cercle()
    {
        rayon=0;
        cout<<"constructeur cercle"<<endl;
    }

    Cercle(double a):rayon(a)
    {
        cout<<"constructeur cercle"<<endl;
    }

    ~Cercle()
    {
        cout<<"destructeur cercle"<<endl;
    }

    Cercle(const Cercle &ch):rayon(ch.rayon)
    {
        cout<<"constructeur cercle"<<endl;
    }

    void description()
    {
        cout<<"Ceci est une cercle !"<<endl;
    }
    double aire()
    {
        return pi*rayon*rayon;
    }

Figure* copie()const;
void affiche()const;
};
 Figure* Cercle::copie()const
    {
        return new Cercle(*this);
    }

  void Cercle::affiche()const
    {

    cout<< "rayon = " << rayon <<"\n" ;

    }
class Triangle : public Figure {
private:
    double base;
    double hauteur;

  public:
       Triangle(){base=0; hauteur=0; cout<<"constructeur Triangle"<<endl;}
      Triangle(double a,double b):base(a),hauteur(b){cout<<"constructeur Triangle"<<endl;}

      ~Triangle(){cout<<"destructeur Triangle"<<endl;}
      Triangle(const Triangle &ch):base(ch.base),hauteur(ch.hauteur){cout<<"constructeur Triangle"<<endl;}

   void description(){
    cout<<"Ceci est une Triangle !"<<endl;
   }
   double aire(){
      return (base * hauteur)/2;
   }
   Figure* copie()const{
         return new Triangle(*this);
    }
     void affiche()const{

        cout<< "base = " << base <<"\n" ;
        cout<< "hauteur = " << hauteur <<"\n" ;

    }

};
class Carre : public Figure {
private:
    double a;


  public:
    Carre(){a=0; cout<<"constructeur carre"<<endl;}
    Carre(double l):a(l){ cout<<"constructeur carre"<<endl;}
    ~Carre(){ cout<<"destructeur carre"<<endl;}
    Carre(const Carre &ch):a(ch.a){cout<<"constructeur carre"<<endl;}

    Figure* copie()const{
         return new Carre(*this);
    }
    void affiche()const
    {
        cout<< "a = " << a <<"\n" ;
    }
};



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
     for (unsigned int i(0); i < t.size(); ++i) delete t[i];

          t.clear();
  }

};
int main () {
Dessin dessin;
dessin.ajouteFigure(Triangle(3,4));
dessin.ajouteFigure(Carre(2));
dessin.ajouteFigure(Triangle(6,1));
dessin.ajouteFigure(Cercle(12));


cout << endl << "Affichage du dessin : "<< endl;

dessin.affiche();
}
