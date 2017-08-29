#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
  int n;
  cin >> n;
  int mi,ma;
  long long int sum=0;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin >> a[i];
  sort(a.begin(),a.end());
  //mi=min(a[0],a[n-1]);
  //ma=max(a[],a.end());
  sum=accumulate(a.begin(),a.end(),0);
  cout << a[0] << " " << a[n-1] << " " << sum << endl;
  return 0;
}
