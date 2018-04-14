#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>


using namespace std;

int main(){

  int n;
  cin >> n;
  vector<int> a(n);

  for(int i=0;i<n;i++)cin >> a[i];

  int cou=1,loc=1;

  while(a[loc]!=2){
    loc=a[loc];
    ++cou;
  }
  cout << cou << endl;

  return 0;
}



