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
    vector<int> a(n);
    REP(i,n)cin >> a[i];

    ll res=0;
    ll sum=0;
    int r=0;
    REP(l,n){
        while((sum^a[r])==(sum+a[r]) && r<n){
            sum+=a[r];
            r++;
        }
        res+=r-l;
        sum^=a[l];
    }
    cout << res << endl;
}
