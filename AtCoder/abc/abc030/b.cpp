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
    double n,m;
    cin >> n >> m;
    n*=5;
    n+=(m/12);
    if(n<m)swap(n,m);
    double ans=(n-m)*6;
    if(ans>360)ans-=360;
    if(ans>180)ans=360-ans;
    printf("%.4f\n",ans);
}
