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
    int n;
    cin >> n;
    int a[n],b[n],c[n];
    REP(i,n)cin >> a[i];
    REP(i,n)cin >> b[i];
    REP(i,n)cin >> c[i];
    sort(a,a+n);
    sort(c,c+n);

    vector<int> cou(n,0);
    REP(i,n){
        auto itr = lower_bound(a,a+n,b[i]);
        cou[i]=itr-a;
    }
    int ans=0;
//    REP(i,n){
//        ans += cou[i]*(n-upper_bound(c.begin(),c.end(),b[i]));
//     }
//
    cout << ans << endl;
}
