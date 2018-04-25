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

int gcd(int n,int m){
    if(m==0){
        return n;
    }else{
        return gcd(m,n%m);
    }
}

int main(){
    int w,h,c;
    cin >> w >> h >> c;
    if(h<w)swap(h,w);
    int n=gcd(w,h);
    cout << c*(w/n)*(h/n) << endl;
}
