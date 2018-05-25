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

int n,m;
int dp[50001];
int c[20];

int solve(){
    dp[0]=0;
    REP(i,n+1){
        REP(j,m){
            if(i>=c[j]){
                dp[i]=min(dp[i],dp[i-c[j]]+1);
            }
        }
    }
    return dp[n];
}

int main(){
    cin >> n >> m;

    REP(i,m)cin >> c[i];
    REP(i,50001)dp[i]=50001;

    int ans=solve();
    cout << ans << endl;
}
