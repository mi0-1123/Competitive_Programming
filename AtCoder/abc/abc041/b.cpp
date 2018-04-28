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

#define N 1000000007

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    ll x=1;
    x*=a;
    x%=N;
    x*=b;
    x%=N;
    x*=c;
    x%=N;
    cout << x << endl;
}
