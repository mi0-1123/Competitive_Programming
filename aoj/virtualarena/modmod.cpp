#include<iostream>
#include<vector>
#include<cstdio>
#include<numeric>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  int per=0;
  for(int i=0;i<n;i++)cin >> a[i];
  sort(a.begin(),a.end());
  int max=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int sum=accumulate(a[0],a[n-i],0);
      if(max>sum)max=sum;
    }
  }
  cout << per << endl;
  return 0;
}
