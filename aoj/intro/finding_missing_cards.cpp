#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a,s[13]={},h[13]={},c[13]={},d[13]={};
  char b;
  for(int i=0;i<n;i++){
    cin >> b >> a;
    if(b=='S')s[a-1]=1;
    else if(b=='H')h[a-1]=2;
    else if(b=='C')c[a-1]=2;
    else if(b=='D')d[a-1]=3;
  }
  for(int i=0;i<13;i++){
    if(!(s[i]>0))cout << "S" << " " << i+1  << endl;
  }
  for(int i=0;i<13;i++){
    if(!(h[i]>0))cout << "H" << " " << i+1 << endl;
  }
  for(int i=0;i<13;i++){
    if(!(c[i]>0))cout << "C" << " " << i+1 << endl;
  }
  for(int i=0;i<13;i++){
    if(!(d[i]>0))cout << "D" << " " << i+1 << endl;
  }

  return 0;
}
