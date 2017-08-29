#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){s
  int n,m,a,b,sum=0,d[10000],dis[10000];
  cin >> n >> m >> a >> b;
  for(int i=0;i<n;i++){
    cin >> d[i];
    if(d[i]>=a)dis[sum++]=d[i];
    else break;
  }
  //  for(int i=0;i<sum;i++)cout << dis[i] << " " ;
  //cout << endl;
  //  cout << sum << endl;
  int last;
  if(n-sum<m){
    for(int i=sum;i>=0;i--){
      sum=i+1;
      if(dis[i]>b)break;
    }
  }
  
  cout << sum << endl;
  return 0;
}
