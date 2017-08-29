#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

  int k,n;

  cin >> n >> k;

  vector<int> l(n);
  
  for(int i=0;i<n;i++)cin >> l[i];

  sort(l.begin(),l.end());
  
  //for(int i=0;i<n;i++)cout << l[i] << endl;
  
  int sum=0;
  // cout << sum << endl;
  for(int i=0;i<k;i++) sum+=l[n-i-1];
  
  cout << sum << endl;
  
  return 0;
}
