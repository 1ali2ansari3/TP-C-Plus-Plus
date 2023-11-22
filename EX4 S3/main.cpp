#include"distributeurMulti.h"

int main()
{
    distributeur A;

    A.ajoutePiece(1);
    A.ajoutePiece(1);
    A.ajoutePiece(1);
    A.delivreBoisson();
    A.ajoutePiece(1);
    A.ajoutePiece(1);
    A.delivreBoisson();


  distributeurMulti B(3);
  B.ajoutePiece(1);
  B.ajoutePiece(1);
  B.ajoutePiece(1);
  B.ajoutePiece(1);
  B.ajoutePiece(1);
  B.ajoutePiece(1);
  B.selection(2);
  B.delivreBoisson();

}
