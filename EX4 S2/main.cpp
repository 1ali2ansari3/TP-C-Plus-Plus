#include"complexe.h"


int main()
{
  complexe defaut,zero(0.0,0.0),un(1.0,0.0),i(0.0,1.0),j;

  cout<<zero<<"==?"<<defaut<<endl;

  if(zero == defaut){
  cout<<"oui"<<endl;
  }
  else{
  cout<<"non"<<endl;
  }
  j=un+i;
  cout<<un<<" + "<<i<<" = "<<j<<endl;

  complexe trois(un);
  trois+=un;
  trois += 1.0;
  cout<< un << "+" <<un <<"+ 1.0 = "<<trois<< endl;

  complexe deux(trois);
  deux-=un;
  cout<< trois << "-" <<un <<" = "<<deux<< endl;

  trois = 1.0 +deux;
  cout<< "1.0 +" <<deux <<" = "<<trois<< endl;

  complexe z;
  z=i*i;
  cout<<i<<"*"<<i<<"="<<z<<endl;

  cout<<z<<"/"<<i<<" = "<<z/i<<" = "<<(z/=i)<<endl;

}
