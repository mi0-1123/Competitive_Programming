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

int dp[101][10001];
int w[101],v[101];
int n,W;

int solve(int i,int j){
//    static int cou=0;
//    cou++;
//    cout << cou << endl;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int res;
    if(i==n){
        res=0;
    }else if(j<w[i]){
        res=solve(i+1,j);
    }else{
        res=max(solve(i+1,j),solve(i+1,j-w[i])+v[i]);
    }
    dp[i][j]=res;
    return res;
}

int main(){
    cin >> n >> W;
    REP(i,n+1)REP(j,W+1)dp[i][j]=-1;
    REP(i,n){
        cin >> v[i] >> w[i];
    }

    int ans=solve(0,W);
    cout << ans << endl;
}
