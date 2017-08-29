#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  double r,p=3.141592653589;
  cin >> r;
  cout << fixed << setprecision(6) << r*r*p << " ";
  cout << fixed << setprecision(6) << 2*r*p << endl;
  return 0;
}
