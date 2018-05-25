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
    int h,w;
    cin >> h >> w;
    char blc;
    int cl[h][w];

    REP(i,h){
        int loc=-1;
        REP(j,w){
            cin >> blc;
            if(blc=='c')loc=j;
            if(loc==-1){
                cl[i][j]=-1;
            }else{
                cl[i][j]=j-loc;
            }
        }
    }

    REP(i,h){
        REP(j,w){
            cout << cl[i][j];
            if(j!=w-1)cout << " ";
        }
        cout << endl;
    }

}
