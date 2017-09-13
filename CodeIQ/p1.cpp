#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
  int n;
  // cin >> n;
  while(scanf("%d",&n)!=EOF){
    vector<int> a(4);
    a[0]=n/1000;
    a[1]=n%1000/100;
    a[2]=n%100/10;
    a[3]=n%10;
    sort(a.begin(),a.end());
    if(a[0]==0)cout << a[1] << endl;
    else cout << a[3] << endl;
    //cin >> n;
  }
  return 0;
}
