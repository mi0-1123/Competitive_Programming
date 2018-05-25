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
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;
    int x=(n/a)*b;
    if(n%a)x+=b;
    int y=(n/c)*d;
    if(n%c)y+=d;
    cout << min(x,y) << endl;
}
