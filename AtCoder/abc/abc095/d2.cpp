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
    ll n,c;
    cin >> n >> c;
    vector<ll> x(n),v(n);
    vector<ll> sumv(n,0);

    REP(i,n){
        cin >> x[i] >> c[i];
        sumv[i]=sumv[i-1]+v[i];
        fg1[i]=max(sumv[i]-x[i],fg1[i-1];
        fg2[i]=sumv[i]-2*v[i];
    }
}
