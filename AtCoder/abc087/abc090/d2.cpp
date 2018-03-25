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
    int n,k;
    cin >> n >> k;
    if(k){
        Int sum=0;
        REAP(i,1,n+1){
            int p=n/i;
            int r=n%i;
            sum+=p*max(0,i-k);
            sum+=max(0,r-k+1);
        }
        cout << sum << endl;
    }else{
        cout << (Int)n*n << endl;
    }
}
