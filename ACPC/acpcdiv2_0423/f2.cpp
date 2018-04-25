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

ll counum(ll n){
    ll cou=0;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            cou+=i;
            if(n/i!=i&&i!=1)cou+=n/i;
        }
    }
    if(n!=1)return cou;
    else return 0;
}

int main(){
    int n;
    while(cin >> n,n){
        ll cou=counum(n);
        if(n==cou)cout << "perfect number" << endl;
        else if(n<cou)cout << "abundant number" << endl;
        else cout << "deficient number" << endl;
    }

}
