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

#define N 100000000



ll table[N+1];

void cou(){
    for(ll i=2;i*i<N;i++){
        for(ll j=i;j<N;j+=i){
            table[j]++;
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    REAP(i,1,N){
        int cou=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                if(i==j*j){
                    cou++;
                }else{
                    cou+=2;
                }
            }
        }
        if(cou==n){
            cout << i << endl;
            return 0;
        }
    }
}
