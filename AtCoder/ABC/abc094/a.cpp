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
    int a,b,x;
    cin >> a >> b >> x;
    if(a>=x&&a+b>=x){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
