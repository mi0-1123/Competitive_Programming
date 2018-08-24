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
    ios::sync_with_stdio(false);
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    while(1){
        a-=b;
        cout << "num : " << a;
        if(a<=b)break;
        if(a<=c){
            a+=d;
            cout << " plus\n";
        }else{
            cout << " no\n";
        }
    }
}
