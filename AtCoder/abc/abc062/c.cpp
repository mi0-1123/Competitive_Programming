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

ll sp(ll x,ll y){
    ll a,b,c;
    ll wl,ws;
    wl=ws=x/2;
    if(x%2){
        wl=(x+1)/2;
    }
    ll mi=INT_MAX;
    REP(i,y-1){
        a=(i+1)*x;
        b=(y-i-1)*wl;
        c=(y-i-1)*ws;
        mi=min(mi,max(abs(a-b),max(abs(b-c),abs(c-a))));
    }
    return mi;
}

ll kaw(ll x,ll y){
    ll a,b,c;
    ll mi=INT_MAX;
    REP(i,y-1){
        a=(i+1)*x;
        b=c=(y-i-1)/2*x;
        if((y-i-1)%2)b=(y-i)/2*x;
        mi=min(mi,max(abs(a-b),max(abs(b-c),abs(c-a))));
    }
    return mi;
}

int main(){
    ios::sync_with_stdio(false);
    ll h,w;
    cin >> h >> w;
    ll mi=INT_MAX;
    mi=min(mi,sp(h,w));
    mi=min(mi,sp(w,h));
    mi=min(mi,kaw(h,w));
    mi=min(mi,kaw(w,h));
    cout << mi << endl;
}
