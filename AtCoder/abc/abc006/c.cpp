#include <bits/stdc++.h>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()

int main(){
    int n,m;
    cin >> n >> m;

    int y=4;
    int g=2;

    int ya,ol,gy;
    int flg=1;
    REP(i,n+1){
       int num=y*i+g*(n-i);
       if(num==m){
           flg=0;
           ya=i;
           gy=(n-i);
           ol=0;
           break;
       }
    }
    if(flg){
        m-=3;
        REP(i,n){
            int num=y*i+g*(n-1-i);
            if(num==m){
                flg=0;
                ya=i;
                gy=n-1-i;
                ol=1;
                break;
            }
        }
    }

    if(flg) cout << "-1 -1 -1" << endl;
    else cout << gy << " " << ol << " " << ya << endl;

}
