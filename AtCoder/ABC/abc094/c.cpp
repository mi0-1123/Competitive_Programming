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

Int n;

Int solve(int num, vector<Int> a){
    sort(All(a));
    //cout << num <<":";
    //REP(i,a.size())cout << a[i] << " ";
    return a[num];
}

int main(){
    cin >> n;

    vector<Int> x(n);
    REP(i,n)cin >> x[i];

    Int num=n/2;

    Int r=solve(num,x);
    Int l=solve(num-1,x);

    Int ans;
    for(Int i=0;i<n;i++){
        if(x[i]>l)ans=l;
        else ans=r;
        cout << ans << endl;
    }
}
