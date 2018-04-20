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
    vector<ll> a(n),b(n),c(n);
    REP(i,n)cin >> a[i];
    REP(i,n)cin >> b[i];
    REP(i,n)cin >> c[i];

    sort(All(a));
    sort(All(b));
    sort(All(c));

    vector<ll> cou(n);

    for(ll i=0;i<n;i++){
        cou[i] = lower_bound(a.begin(),a.end(),b[i])-a.begin();
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+=cou[i]*(n-(upper_bound(c.begin(),c.end(),b[i])-c.begin()));
    }

    cout << ans << endl;
}
