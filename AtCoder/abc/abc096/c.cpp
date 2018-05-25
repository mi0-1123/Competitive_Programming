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

int h,w;
char s[51][51];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};


bool check(int i,int j){
    REP(a,4){
        int x=i+dy[a];
        int y=j+dx[a];
        if(x>=0&&x<h&&y>=0&&y<w){
            if(s[x][y]=='#')return true;
        }
    }
    return false;
}


int main(){
    cin >> h >> w;

    REP(i,h){
        REP(j,w){
            cin >> s[i][j];
        }
    }

    int flg=true;

    REP(i,h){
        REP(j,w){
            if(s[i][j]=='#'){
                if(check(i,j)==false){
                    flg=false;
                    break;
                }
            }
        }
        if(flg==false)break;
    }
    if(flg)YES;
    else NO;
}
