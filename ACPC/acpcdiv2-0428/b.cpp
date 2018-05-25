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
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int t=0;
    if(a<0){
        t+=abs(a)*c;
        t+=d;
        t+=b*e;
    }else{
        t+=(b-a)*e;
    }
    cout << t << endl;
}
