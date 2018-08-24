#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,l,r;
  while(cin >> n >> l >> r,n){
    int cou=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];

    for(int i=l;i<=r;i++){
      bool flg=false;
      for(int j=0;j<n;j++){
	if(!(i%a[j])){
	  flg=true;
	  if(!(j%2))cou++;
	  break;
	}
      }
      if(!flg && !(n%2))cou++;
    }

    cout << cou << endl;

  }
  return 0;
}
