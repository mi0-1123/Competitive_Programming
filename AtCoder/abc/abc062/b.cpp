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
    int h,w;
    cin >> h >> w;
    vector<string> a(h);
    REP(i,h)cin >> a[i];
    REP(i,w+2)cout << "#";
    cout << endl;
    REP(i,h)cout << "#" << a[i] << "#" << endl;
    REP(i,w+2)cout << "#";
    cout << endl;
}
