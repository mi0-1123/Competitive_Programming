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

    int n,a,b;
    cin >> n >> a >> b;
    string s;
    int d;
    int dir,loc=0;
    REP(i,n){
        cin >> s >> d;
        if(s=="East")dir=1;
        else dir=-1;

        if(d<a)loc+=a*dir;
        else if(d>b)loc+=b*dir;
        else loc+=d*dir;
    }
    if(loc>0) cout << "East " << loc << endl;
    else if(loc<0) cout << "West " << loc*-1 << endl;
    else cout << 0 << endl;
}
