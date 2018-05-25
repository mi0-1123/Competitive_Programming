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

int cou;

int mygcd(int a,int b){
    cou++;
    if(b==0)return a;
    else return mygcd(b,a%b);
}

int main(){
    ios::sync_with_stdio(false);
    int a,b;
    while(cin >> a >> b,a){
        if(a<b)swap(a,b);
        int res = mygcd(a,b);
        cout << res << " " << cou-1 << endl;
        cou=0;
    }
}
