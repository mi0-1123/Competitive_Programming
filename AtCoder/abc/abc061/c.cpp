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
    ll n,k;
    cin >> n >> k;
    vector<pair<ll,ll> > table(n);
    ll a,b;
    REP(i,n){
        cin >> a >> b;
        table[i].fr=a;
        table[i].sc=b;
    }
    sort(All(table));
    ll cou=0,res=-1;
    bool flg=false;
    REP(i,n){
//        cout << table[i].fr <<" "<< table[i].sc << endl;
        cou+=table[i].sc;
        if(cou>=k&&!flg){
            res=table[i].fr;
            flg=1;
        }
    }
    cout << res << endl;
}
