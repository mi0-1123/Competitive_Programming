#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
  long long int n,sum;
  while(scanf("%lld",&n)!=EOF){
    sum=0;
    int i=2;
    long long int m=n;
    while(m<2000000){
      if(m%2>0)sum++;
      m+=n;
    }
    cout << sum << endl;
  }

  return 0;
}
