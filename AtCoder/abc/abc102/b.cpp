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
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    ll a,mi=1e9+7,ma=0;
    REP(i,n){
        cin >> a;
        mi=min(mi,a);
        ma=max(ma,a);
    }
    cout << ma-mi << endl;
}
