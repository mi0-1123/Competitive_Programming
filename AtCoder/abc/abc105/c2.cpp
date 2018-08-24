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
    string s="";
    if(n%2)s="1";
    else s="0";
    ll a=2;
    while(n){
        if(n%a)s+="1";
        else s+="0";
        n-=n%a;
        a*=2;
    }
    reverse(All(s));
    cout << s << endl;
}
