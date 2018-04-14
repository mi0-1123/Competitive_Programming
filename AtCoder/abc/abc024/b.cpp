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
    int n,t;
    cin >> n >> t;
    Int sum=0;
    int a,f;
    cin >> f;
    REAP(i,1,n){
        cin >> a;
        if(a-f>t)sum+=t;
        else sum+=a-f;
        f=a;
    }
    cout << sum+t << endl;
}
