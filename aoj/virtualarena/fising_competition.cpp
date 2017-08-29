#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int h1,h2,k1,k2,a,b,c,d;
  cin >> h1 >> h2;
  cin >> k1 >> k2;
  cin >> a >> b >> c >> d;
  int hiro = h1*a + h1/10*c + h2*b + h2/20*d;
  int ken = k1*a + k1/10*c + k2*b + k2/20*d;
  if(hiro>ken)cout << "hiroshi" << endl;
  else if(ken > hiro)cout << "kenjiro" << endl;
  else cout << "even" << endl;
  return 0;
}
