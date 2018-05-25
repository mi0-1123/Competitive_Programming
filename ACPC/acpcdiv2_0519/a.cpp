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
    int c[]={1,5,10,50,100,500};
    int a,sum=0;
    REP(i,6){
        cin >> a;
        sum+=a*c[i];
    }
    if(sum<1000)cout << 0 << endl;
    else cout << 1 << endl;
}
