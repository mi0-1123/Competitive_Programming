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
    int n,x;
    cin >> n >> x;
    int mi=INT_MAX;
    int m,sum=0;
    REP(i,n){
        cin >> m;
        x-=m;
        sum++;
        mi=min(mi,m);
    }
    sum+=(x/mi);
    cout << sum << endl;
}
