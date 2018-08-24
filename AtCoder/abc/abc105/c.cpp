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

ll n;
string ans;

void solve(ll sum,ll i,string s){
    if(n==sum){
        ans=s;
        return;
    }
    if(i>32)return;
    ll b;
    b=pow(2,i);
    if(i%2)b*=-1;

    solve(sum+b,i+1,s+"1");
    solve(sum,i+1,s+"0");
}

int main(){
    ios::sync_with_stdio(false);
    cin >> n;
    ans="";
    if(n==0){
        cout << "0" << endl;
    }else{
        solve(0,0,"");
        cout << ans << endl;
    }
}
