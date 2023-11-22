//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Couleur {
//public:
//  typedef enum { ROUGE, VERT, BLEU, BLANC, NOIR } Choix;
//  Couleur(Choix c) : valeur(c) {}
//  virtual ~Couleur() {}
//  Choix valeur;
//  void affiche(ostream&, bool feminin = false) const;
//};
//
//void Couleur::affiche(ostream& out, bool feminin) const
//{
//  switch (valeur)
//  {
//      case ROUGE:
//        out << "rouge";
//        break;
//      case VERT:
//        out << "vert";
//        if (feminin) out << "e";
//        break;
//      case BLEU:
//        out << "bleu";
//        if (feminin) out << "e";
//        break;
//      case BLANC:
//        out << "blanc";
//        if (feminin) out << "he";
//        break;
//      case NOIR:
//        out << "noir";
//        if (feminin) out << "e";
//        break;
//  }
//}
//
// ----------------------------------------------------------------------------------
//class Carte {
//public:
//  Carte(unsigned int cout1 = 0) : cout1(cout1) {
//       cout << "  une carte de cout " << cout << " : ";
//  }
//  virtual ~Carte() {}
//  virtual void afficher(ostream& out) const {
//      out << " de coût " << cout1;
//  }
//
//protected:
//  unsigned int cout1;
//};
//
//ostream& operator<<(ostream& out, const Carte& c)
//{
//  c.afficher(out);
//  return out;
//}
//
// ----------------------------------------------------------------------------------
//class Terrain : public virtual Carte {
//public:
//  Terrain(Couleur c) : couleur(c) {
//      std::cout << "Un nouveau terrain." << endl;
//  }
//  virtual ~Terrain() {}
//  void afficher(ostream&) const;
//
//protected:
//  Couleur couleur;
//};
//
//void Terrain::afficher(ostream& out) const
//{
//  out << "Un terrain ";
//  couleur.affiche(out);
//  out << "." << endl;
//}
//
// ----------------------------------------------------------------------------------
//class Creature : public virtual Carte {
//public:
//  Creature(unsigned int cout1, string nom, unsigned int attaque,unsigned int defense) : Carte(cout1), nom(nom),attaque(attaque), defense(defense) {
//      std::cout << "Une nouvelle créature." << endl;
//  }
//  virtual ~Creature() {}
//  void afficher(ostream&) const;
//
//protected:
//  string nom;
//  unsigned int attaque;
//  unsigned int defense;
//};
//
//void Creature::afficher(ostream& out) const
//{
//  out << "Une créature " << nom << '  ' << attaque << "/"
//        << defense << '  ';
//  Carte::afficher(out);
//  out << endl;
//}
//
// ----------------------------------------------------------------------------------
//class CreatureTerrain : public Creature, public Terrain {
//public:
//  CreatureTerrain(unsigned int cout1, string nom, unsigned int attaque,unsigned int defense, Couleur couleur):Carte(cout1),
//       Creature(cout1, nom, attaque, defense)
//       ,Terrain(couleur)
//  {
//      std::cout << "Houla, une créature/terrain." << endl;
//  }
//  virtual ~CreatureTerrain() {}
//  void afficher(ostream&) const;
//};
//
//void CreatureTerrain::afficher(ostream& out) const
//{
//  out << "Une créature/terrain ";
//  couleur.affiche(out);
//  out << '  ' << nom << '  ' << attaque << "/" << defense << '  ';
//  Carte::afficher(out);
//  out << endl;
//}
//
// ----------------------------------------------------------------------------------
//class Jeu : public vector<Carte*> {
//public:
//  Jeu() { cout << "On change de main" << endl; }
//  virtual ~Jeu() {}
//  void jette(Carte *p);
//};
//
//ostream& operator<<(ostream& out, const Jeu& j)
//{
//  for (unsigned int i(0); i < j.size(); ++i)
//      out << "  + " << (j[i]);
//  return out;
//}
//
//void Jeu::jette(Carte *p)
//{
//  cout << "Je jette ma main." << endl;
//  while (!empty()) {
//
//      (*this).push_back(p);
//  }
//}

// ---------------------------------------------------------------------------------
#include"Jeu.h"
#include"terrains.h"
int main()
{
  Jeu mamain;

  mamain.jette(new terrain(Couleur::BLEU));




  return 0;
}

