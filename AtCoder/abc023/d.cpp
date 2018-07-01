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

int n;

bool check(Int maxheight , const vector<Int> &H, const vector<Int> &S ){

  vector<Int> t(n);
  for(int i=0;i<n;i++){
      if(maxheight < H[i]) return false;
      t[i]= (maxheight - H[i])/S[i];
  }
  sort(All(t));
  REP(i,n){
    if(t[i]<i){
      return false;
    }
  }
  return true;
}

Int solove(int n,Int maxs,Int maxh,const vector<Int> &H, const vector<Int> &S ){
    Int L=1;
    Int R=1000000000000000000LL;
    while(L<R){
        Int mid = (L+R)/2;
        if(check(mid,H,S))R=mid;
        else L=mid+1;
    }
    return R;
}

int main(){

    cin >> n;

    vector<Int> h(n);
    vector<Int> s(n);
    Int maxs=0,maxh=0;
    REP(i,n){
        cin >> h[i] >> s[i];
        maxs=max(maxs,s[i]);
        maxh=max(maxh,h[i]);
    }

    Int ans = solove(n,maxh,maxs,h,s);
    cout << ans << endl;
}

