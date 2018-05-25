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

int rd[101][101];

void solve(int n){

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rd[i][j]=min(rd[i][j],rd[i][k]+rd[k][j]);
            }
        }
    }
}


void init(){
    REP(i,101){
        REP(j,101){
            rd[i][j]=1e9;
            if(i==j)rd[i][j]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n,m,s,g1,g2;
    while(cin>>n>>m>>s>>g1>>g2,n){
        s--;
        g1--;
        g2--;
        int a,b,c;
        init();
        REP(k,m){
            cin >> a >> b >> c;
            a--;
            b--;
            rd[a][b]=c;
        }
        solve(n);
        cout << rd[s][g1]+rd[s][g2] << endl;
    }
}
