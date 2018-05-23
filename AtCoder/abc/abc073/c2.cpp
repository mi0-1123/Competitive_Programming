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
    ll n;
    cin >> n;
    vector<ll> a(n);
    REP(i,n)cin >> a[i];
    sort(All(a));
    ll cou=1,res=0;
    REAP(i,1,n){
        if(a[i-1]==a[i]){
            cou++;
        }else{
            if(cou%2)res++;
            cou=1;
        }
    }
    if(cou%2)res++;
    cout << res << endl;
}
