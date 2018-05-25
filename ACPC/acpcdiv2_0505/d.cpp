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

int main(){
    ll n;
    cin >> n;
    ll num = (n+1)/2;
    int k;
    cin >> k;
    ll a,b;
    REP(i,k){
        cin >> a >> b;
        if(n%2==0){
            if(a>num)a--;
            if(b>num)b--;
        }
        a=num-abs(a-num);
        b=num-abs(b-num);
        int loc=(min(a,b)-1)%3;
        if(loc==0)cout << 1 << endl;
        else if(loc==1)cout << 2 << endl;
        else cout << 3 << endl;
    }
}
