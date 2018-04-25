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
int table[1001][1001];
int g[1001][1001];

void putg(){
    REP(i,m+1){
        REP(j,n+1){
            g[i][j]=INT_MAX;
        }
    }
    g[0][0]=0;
}

int check(int i,int j){
    if(i>0&&j>0){
        return 0;
    }else if(j>0){
        return 1;
    }else {
        return 2;
    }
}

int solve(){
    REP(i,m){
        REP(j,n+1){
            if(i+1<j)continue;
            int ch=check(i,j);
            if(ch==0){
                g[i][j]=min(g[i-1][j],g[i-1][j-1]+table[i][j]);
            }else if(ch==1){
                g[i][j]=table[i][j];
            }else{
                g[i][j]=0;
            }
        }
    }
    return g[m-1][n];
}

int main(){
    cin >> n >> m;
    putg();
    vector<int> d(n),c(m);
    REP(i,n)cin >> d[i];
    REP(i,m){
        cin >> c[i];
        REP(j,n){
            table[i][j+1]=c[i]*d[j];
        }
    }

    int ans=solve();
//    REP(i,m){
//        REP(j,n+1){
//            cout << table[i][j] <<" ";
//        }
//        cout << endl;
//    }

//    REP(i,m){
//        REP(j,n+1){
//            cout << g[i][j] << " ";
//        }
//        cout << endl;
//    }
    cout << ans << endl;

}
