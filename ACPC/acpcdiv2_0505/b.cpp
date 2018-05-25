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
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    REP(i,m)cin >> a[i];
    vector<int> pt(n,0);
    int b;
    REP(i,m){
        REP(j,n){
            cin >> b;
            if(b==a[i])pt[j]++;
            else pt[a[i]-1]++;
        }
    }

    REP(i,n)cout << pt[i] << endl;
}
