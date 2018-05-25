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
    int a,b,c;
    cin >> a >> b >> c;
    int k;
    cin >> k;
    int sum=a+b+c;
    int ma=max(a,max(b,c));
    sum-=ma;
    REP(i,k)ma*=2;
    cout << sum+ma << endl;
}
