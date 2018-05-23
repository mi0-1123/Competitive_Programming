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

ll gcd(ll a,ll b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    ll res=0;
    ll a,b;

    cin >> b;
    REAP(i,1,n){
        cin >> a;
        if(b>a)swap(a,b);
        ll g=gcd(a,b);
        b=(a/g)*b;
    }
    cout << b << endl;
}
