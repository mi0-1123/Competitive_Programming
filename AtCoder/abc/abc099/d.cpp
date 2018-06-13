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
    int n,c;
    cin >> n >> c;
//    for(i,3)for(j,c)table[i][j]=1e9;

    int d[31][31];
    REP(i,c)REP(j,c)cin >> d[i][j];

//    REP(i,c)REP(j,c)cout << d[i][j] << (j!=c-1?" ":"\n");


    int x;
    int table[3][c]={{}};
    REP(i,3)REP(j,c)table[i][j]=0;
    REP(i,n)REP(j,n){
        cin >> x;
        table[(i+j+2)%3][x-1]++;
    }

//    REP(i,3)REP(j,c)cout << table[i][j] << (j!=c-1?" ":"\n");
//    REP(i,c)REP(j,c)cout << d[i][j] << (j!=c-1?" ":"\n");

    ll sum[3][c]={{}};
    REP(i,3)REP(j,c)sum[i][j]=0;

    REP(k,3){
        REP(i,c){
            REP(j,c){
                sum[k][i]+=table[k][j]*d[j][i];
            }
        }
    }
    ll mi=LONG_MAX;

    REP(i,c){
        REP(j,c){
            REP(k,c){
                if(i==j||j==k||k==i)continue;
                mi=min(mi,sum[0][i]+sum[1][j]+sum[2][k]);
            }
        }
    }
    cout << mi << endl;
}
