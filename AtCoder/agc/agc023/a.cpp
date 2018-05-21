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
    unordered_map<ll,ll> table;
    table[0]++;
    ll a,sum=0;
    REP(i,n){
        cin >> a;
        sum+=a;
        table[sum]++;
    }
    ll cou=1,res=0;
    for(pair<ll,ll> p:table){
        ll pf=p.fr;
        ll ps=p.sc;
//        cout << pf << " " << ps << endl;
        res+=((ps-1)*ps)/2;
    }
    cout << res << endl;
}
