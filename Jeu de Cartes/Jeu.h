#ifndef JEU_H
#define JEU_H
#include<vector>
#include"Carte.h"

class Jeu public vector<Carte*>
{



public:

    void jette(Carte*c);
    void affiche()const
    {
        for(int j=0; j<t.size(); j++)
        {
            t[j]->affiche();
        }
    }
    ~Jeu()
    {

        for (unsigned int i(0); i < t.size(); ++i) delete t[i];

        t.clear();
    }

};
void Jeu::jette(Carte *p)
{
  cout << "Je jette ma main." << endl;
  while (!empty()) {

      (*this).push_back(p);
  }
}
#endif
