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

ll solve(ll n){
    ll cou=0;
    while(cou*cou<=n){
        cou++;
    }
    return pow(cou-1,2);
}
int main(){
    ll n;
    cin >> n;
    ll ans = solve(n);
    cout << ans << endl;
}
