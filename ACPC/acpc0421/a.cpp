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
int block[51][51];
int s[51][51];

int check(int i,int j){
    if(i>0&&j>0)return 0;
    else if(i>0)return 1;
    else return 2;
}

int solve(){
    REP(i,h){
        REP(j,w){
            if(i==0&&j==0)continue;
            int ch=check(i,j);
            if(ch==0){
                s[i][j]=block[i][j]+min(s[i][j-1],s[i-1][j]);
            }else if(ch==1){
                s[i][j]=block[i][j]+s[i-1][j];
            }else if(ch==2){
                s[i][j]=block[i][j]+s[i][j-1];
            }
        }
    }
    return s[h-1][w-1];
}


int main(){
    cin >> h >> w;

    char c;
    REP(i,h){
        REP(j,w){
            cin >> c;
            block[i][j]=c-'0';
        }
    }
//    REP(i,51){
//        REP(j,51){
//            s[i][j]=INT_MAX;
//        }
//    }
    s[0][0]=0;
    int ans=solve();

//    REP(i,h){
//        REP(j,w){
//            cout << s[i][j] << " ";
//        }
//        cout << endl;
//    }
    cout << ans << endl;
}
