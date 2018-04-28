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
    ll n;
    cin >> n;
    ll mi=100001;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j*i<=n;j++){
            mi=min(mi,abs(i-j)+(n-i*j));
        }
    }
    cout << mi << endl;
}
