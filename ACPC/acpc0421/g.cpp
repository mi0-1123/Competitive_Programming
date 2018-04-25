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
typedef pair<int,int> P;

int h,w;
string table[21];
int dp[21][21];
int ans;

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};

void puts_max(){
    REP(i,h+1){
        REP(j,w+1){
            dp[i][j]=INT_MAX;
        }
    }
}

void solve(int y,int x){
    ans++;
    dp[y][x]=0;
    REP(i,4){
        if(y+dy[i]>=0 && y+dy[i]<h && x+dx[i]>=0 && x+dx[i]<w){
            if(dp[y+dy[i]][x+dx[i]]!=0 && table[y+dy[i]][x+dx[i]]!='#'){
                solve(y+dy[i],x+dx[i]);
            }
        }
    }
}

int main(){
    P st;
    while(cin>>w>>h,w){
        ans=0;
        REP(i,h)cin >> table[i];

        //cout << 1 << endl;
        REP(i,h){
            REP(j,w){
                if(table[i][j]=='@'){
                    st.fr=i;
                    st.sc=j;
                }
            }
        }
        puts_max();
        solve(st.fr,st.sc);
        cout << ans << endl;
    }
}
