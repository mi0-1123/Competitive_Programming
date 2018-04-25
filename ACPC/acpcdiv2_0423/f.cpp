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

#define N 100000001

ll pn[N];

void eratos(){
    for(ll i=2;i*i<N;i++){
        if(pn[i]==1)continue;
        for(ll j=2*i;j<N;j+=i){
            pn[j]=1;
        }
    }
}

//void counum(){
//    for(ll i=1;i<N;i++){
//        for(ll j=2*i;j<N;j+=i){
//            num[j]+=i;
//        }
//    }
//}

ll cousum(ll num){
    ll cou=1;
    for(ll i=2;i*i<num;i++){
        if(pn[i]==1)continue;
        ll a=num,b=0;
        if(num%i==0){
            while(a%i==0){
                b++;
                a/=i;
            }
            cou*=(b+2);
        }
    }
    return cou;
}

int main(){
    eratos();
//    REP(i,20)if(pn[i]==0)cout << i <<" ";
    ll n;
    while(cin >> n,n){
        ll cou=cousum(n);
        cout << cou << " ";
        if(n==cou&&n!=1)cout << "perfect number" << endl;
        else if(n>cou||n==1)cout << "deficient number" << endl;
        else cout << "abundant number" << endl;
    }
}
