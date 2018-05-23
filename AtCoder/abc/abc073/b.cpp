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

#define N 100000
int table[N+1];

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int l,r;
    REP(i,n){
        cin >> l >> r;
        table[l-1]++;
        table[r]--;
    }

    int sum=0,a=0;
    REP(i,N){
        a+=table[i];
        sum+=a;
    }
    cout << sum << endl;
}
