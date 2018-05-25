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
    int n,m;
    cin >> n >> m;
    vector<int> a(n),cou(n,0);
    int b;
    REP(i,n)cin >> a[i];

    REP(i,m){
        cin >> b;
        int m=0;
        REP(i,n){
            if(m<a[i]&&b>=a[i]){
            cou[i]++;
            m=a[i];
            }
        }
    }
    int ma=0,res;
    REP(i,n){
        if(ma<cou[i]){
            ma=cou[i];
            res=i+1;
        }
    }
    cout << res << endl;
}
