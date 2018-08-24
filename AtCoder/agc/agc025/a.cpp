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
    int a,b,mi=1e9;
    for(int i=1;i<=n/2;i++){
        a=i;
        b=n-i;
        string aa=to_string(a);
        string bb=to_string(b);
        int sum=0;
        REP(j,aa.size())sum+=(aa[j]-'0');
        REP(j,bb.size())sum+=(bb[j]-'0');
        mi=min(mi,sum);
    }
    cout << mi << endl;
}
