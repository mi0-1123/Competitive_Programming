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
struct Cake {
    ll data[3];
};

ll solve(Cake *cake,int n,int m,const int sign[3]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll a=0,b=0;
            REP(k,3)a+=cake[i].data[k]*sign[k],b+=cake[j].data[k]*sign[k];
            if(a>b)swap(cake[i],cake[j]);
        }
    }

    ll sum=0;
    REP(i,m){
        REP(j,3){
            sum+=cake[n-1-i].data[j]*sign[j];
        }
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    ll n,m;
    const int sign[8][3]={{1,1,1},{1,1,-1},{1,-1,1},{1,-1,-1},
        {-1,1,1},{-1,1,-1},{-1,-1,1},{-1,-1,-1}};
    Cake cake[1001];
    int dp[1001];
    cin >> n >> m;
    REP(i,n){
        ll a,b,c;
        cin >> a >> b >> c;
        cake[i].data[0]=a;
        cake[i].data[1]=b;
        cake[i].data[2]=c;
    }
    ll res = 0;
    REP(i,8){
        ll t = solve(cake,n,m,sign[i]);
        res = max(t,res);
    }
    cout << res << endl;

}
