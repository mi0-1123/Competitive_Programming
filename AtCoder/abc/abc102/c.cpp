#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(ll i=0;i<(n);i++)
#define REAP(i,a,n) for(ll i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
    ll n,a;
    ll sum=0;
    cin >> n;
    vector<ll> vc;
    for(ll i=1;i<=n;i++){
        cin >> a;
        vc.pb(a);
        sum+=(a-i);
    }
    ll s,t,u;
    s=sum/n;
    t=s-1;
    u=s+1;
    cout << s << endl;
    ll res1,res2,res3;
    res1=res2=res3=0;
    REP(i,n){
        res1+=abs(vc[i]-s-(i+1));
        res2+=abs(vc[i]-t-(i+1));
        res3+=abs(vc[i]-u-(i+1));
    }
    ll ans=min(res1,min(res2,res3));
    cout << ans << endl;
    return 0;
}
