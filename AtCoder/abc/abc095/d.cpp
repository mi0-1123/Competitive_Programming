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

int n;
ll mafa;
ll c,v;
ll x[1001],fg[1001],maa[1001];


ll solve(){
    int ma=0;
    REP(i,n){
        int sum=maa[i]-x[i]+(fg[n-1]-fg[n-1-i])-(c-x[n-1-i]);
        ma=max(sum,ma);
    }
    REP(i,n){
        int sum=maa[i]+(fg[n-1]-fg[n-1-i])-2*(c-x[n-1-i]);
        ma=max(ma,sum);
    }
    return ma;
}

int main(){
    cin >> n >> c;
    cin >> x[0LL] >> v;
    fg[0LL]=v;
    maa[0LL]=fg[0LL]-x[0LL];
    for(ll i=1;i<n;i++){
        cin >> x[i] >> v;
        fg[i]=fg[i-1]+v;
        maa[i]=max(maa[i-1],fg[i]-x[i]);
    }

    ll ans=solve();
    cout << ans << endl;
}
