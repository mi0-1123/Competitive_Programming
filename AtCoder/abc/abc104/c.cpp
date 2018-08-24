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

vector<int> p,c;
vector<int> dp;

void solve(int g,int d){
    REP(i,g+1){ //i はおもさ
        REP(j,d){
            REAP(l,1,p[j]){
                dp[i+(j+1)*l]=min(dp[i+(j+1)*l],i+l);
            }
            dp[i+(j+1)*p[j]+c[j]]=min(dp[i+(j+1)*p[i]+c[j]],i+p[j]);
        }
    }
    for(int i=1e6-2;i>=0;i--){
        dp[i]=min(dp[i],dp[i-1]);
    }
}

int main(){
    ios::sync_with_stdio(false);

    int d,g;
    cin >> d >> g;
    g/=100;
    REP(i,1e6)dp.pb(1e9+7);
    dp[0]=0;


    int a,b;
    REP(i,d){
        cin >> a>>b;
        b/=100;
        p.pb(a);
        c.pb(b);
    }

    solve(g,d);

    REP(i,g)cout <<i<<" : "<< dp[i] << endl;

    cout << dp[g] << endl;
}
