//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
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
    int n;
    cin >> n;
    int a;
    int b[101];
    int table[2][100]={};

    int sum=0;
    REP(i,n){
        cin >> a;
        sum+=a;
        table[0][i]=sum;
    }


    REP(i,n){
        cin >> b[i];
    }
    sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=b[i];
        table[1][i]=sum;
    }
    int res=0;
    REP(i,n){
        res=max(table[0][i]+table[1][i],res);
    }
    cout << res << endl;
}
