#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
   int n;
   cin >> n;
   int x,y,b,p;
   int sum1,sum2;
   REP(i,n){
       cin >> x >> y >> b >> p;

       sum1=((x*5+y*2)*8)/10;
       if(b>5)sum1+=(x*(b-5)*8)/10;
       if(p>2)sum1+=(y*(p-2)*8)/10;

       sum2=x*b+y*p;
       cout << min(sum1,sum2) << endl;
   }
}
