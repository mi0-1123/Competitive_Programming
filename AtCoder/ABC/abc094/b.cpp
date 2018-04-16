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

    int n,m,x;
    cin >> n >> m >> x;

    int a;
    int l=0,r=0;
    REP(i,m){
        cin >> a;
        if(a<x)l++;
        else r++;
    }
    if(l<r)cout << l << endl;
    else cout << r << endl;

}
