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
    int n,t;
    cin >> n >> t;
    int a[100001]={};
    int l,r;
    REP(i,n){
        cin >> l >> r;
        a[l]+=1;
        a[r]+=-1;
    }
    int ma=a[0];
    REAP(i,1,100001){
        a[i]+=a[i-1];
        ma=max(ma,a[i]);
    }
    cout << ma << endl;
}
