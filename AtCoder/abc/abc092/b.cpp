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
    int n,d,x;

    cin >> n >> d >> x;
    int sum=n;
    d--;
    int a;
    REP(i,n){
        cin >> a;
        sum+=d/a;
    }
    cout << sum+x << endl;
}
