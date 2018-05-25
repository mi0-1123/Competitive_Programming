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

int blc[51][51];
int dp[51][51];

int solve(int h,int w){
    REP(i,h){
        REP(j,w){
            if(i==0&&j==0)continue;
            else if(i==0)dp[i][j]=dp[i][j-1]+blc[i][j];
            else if(j==0)dp[i][j]=dp[i-1][j]+blc[i][j];
            else dp[i][j]=min(dp[i-1][j],dp[i][j-1])+blc[i][j];
        }
    }
    return dp[h-1][w-1];
}

int main(){
    int h,w;
    cin >> h >> w;
    char b;
    REP(i,h){
        REP(j,w){
            cin >> b;
            blc[i][j]=b-'0';
        }
    }
    dp[0][0]=0;

    int ans=solve(h,w);
    cout << ans << endl;

}
