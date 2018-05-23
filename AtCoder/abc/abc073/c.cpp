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
    int n;
    cin >> n;
    ll a;
    set<ll> table;
    REP(i,n){
        cin >> a;
        auto itr=table.find(a);
        if(itr != table.end()){
            table.erase(a);
        }else{
            table.insert(a);
        }
    }
    cout << table.size() << endl;

}
