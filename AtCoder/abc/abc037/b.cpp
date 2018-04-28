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
    int n,q;
    cin >> n >> q;
    vector<ll> a(n,0);
    int l,r;
    ll t;
    REP(i,q){
        cin >> l >> r >> t;
        for(int i=l-1;i<r;i++)a[i]=t;
    }
    REP(i,n)cout << a[i] << endl;
}
