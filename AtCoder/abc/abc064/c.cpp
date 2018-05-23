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
    int n;
    cin >> n;
    vector<bool> a(8,false);
    int r;
    REP(i,n){
        cin >> r;
        if(r<400)a[0]=true;
        else if(r<800)a[1]=true;
        else if(r<1200)a[2]=true;
        else if(r<1600)a[3]=true;
        else if(r<2000)a[4]=true;
        else if(r<2400)a[5]=true;
        else if(r<2800)a[6]=true;
        else if(r<3200)a[7]=true;
        else a.pb(true);
    }
    int res=0,couf=0;
    for(bool flg:a){
        if(flg)res++;
        else couf++;
    }
    cout << max(1,8-couf) <<" "<< res << endl;

}
