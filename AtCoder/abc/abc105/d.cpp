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
    ios::sync_with_stdio(false);
    ll n,m;
    cin >> n >> m;
    vector<ll> sum(n);
    ll a;
    cin >> a;
    sum[0]=a;
    REAP(i,1,n){
        cin >> a;
        sum[i]=a+sum[i-1];
    }
    
}
