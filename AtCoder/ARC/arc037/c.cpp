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

bool check(Int goal,Int n,Int k,const vector<Int> &a,const vector<Int> &b){
    Int i=0,j=n-1;
    Int sum=0;
    while(j>=0&&i<n){
        if(a[i]*b[j]<=goal){
            i++;
            sum+=(j+1);
        }else{
            j--;
        }
    }

    if(sum>=k)return true;
    else return false;
}

Int solve(Int n,Int k,const vector<Int> &a,const vector<Int> &b){
//    Int ans;
//    for(Int i=0;i<n;i++){
//        Int l=0;
//        Int r=n;
//        while(l<r){
//            Int mid=(l+r)/2;
//            if(check(b[mid]*a[i],n,k,a,b)){
//                r=mid;
//            }else{
//                l=mid+1;
//            }
//        }
//        ans=min(ans,b[r]*a[i]);
//    }
//    return ans;

    Int l=a[0]*b[0];
    Int r=a[n-1]*b[n-1];
    while(l<r){
        Int mid=(l+r)/2;
        if(check(mid,n,k,a,b)){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    return r;
}


int main(){
    Int n,k;
    cin >> n >> k;

    vector<Int> a(n);
    vector<Int> b(n);

    REP(i,n)cin >> a[i];
    REP(i,n)cin >> b[i];

    sort(All(a));
    sort(All(b));

    Int ans = solve(n,k,a,b);
    cout << ans << endl;
}
