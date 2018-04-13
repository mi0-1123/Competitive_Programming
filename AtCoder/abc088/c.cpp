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

    int a[3],b[3];
    int c[3][3];

int main(){
    REP(i,3)REP(j,3){
        cin >> c[i][j];
    }

    REP(i,3)b[i]=c[0][i];

    a[1]=c[1][0]-b[0];
    a[2]=c[2][0]-b[0];

    bool flg=true;
    REP(i,3)REP(j,3){
        if(a[i]+b[j]!=c[i][j])flg=false;
    }
    if(flg)YES;
    else NO;

}
