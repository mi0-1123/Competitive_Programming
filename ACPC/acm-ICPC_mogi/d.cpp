#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll cal(ll n){
  int ret= 8*(int)pow(2,n-1);
  int s=0;
  for(int i=1;i<n;i++){
    int ue=1,st=1;
    for(int j=1;j<=i;j++)ue*=(n-j+1),st*=j;
    s+=(int)ue/st;
  }
  ret+=56*s;
  return ret;
}

int main(){

  ll n;
  ll ket;
  while(cin >> n,n){
    for(ll i=2;;i++){
      ket=i;
      ll c=cal(i);
      if(n>c)n-=c;
      else break;
    }

    set<string> st;
    string st1,st2;
    for(int i=0;i<10;i++){
      for(int j=1;j<10;j++){
	if(i==j)break;
	for(int k=0;k<ket;k++){
	  if(!i)st1="";
	  st2
	}
      }
    }
  }
  return 0;
}
