#ifndef COULURE_H
#define COULURE_H



class Couleur {
public:
  typedef enum { ROUGE, VERT, BLEU, BLANC, NOIR } Choix;
  Couleur(Choix c) : valeur(c) {}
  virtual ~Couleur() {}
  Choix valeur;
  void affiche(bool feminin = false) const{switch (valeur)
  {
      case ROUGE:
        cout << "rouge";
        break;
      case VERT:
        cout << "vert";
        if (feminin) cout << "e";
        break;
      case BLEU:
        cout << "bleu";
        if (feminin) cout << "e";
        break;
      case BLANC:
        cout << "blanc";
        if (feminin) cout << "he";
        break;
      case NOIR:
        cout << "noir";
        if (feminin) cout << "e";
        break;
  }}
};




#endif
