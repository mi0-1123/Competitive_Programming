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
    int n;
    while(cin >> n,n){
        int k;
        int res=0;
        bool flg=false;
        REP(i,n){
            cin >> k;
            if(k>0)res++;
            if(k>1)flg=true;
        }
        if(flg)cout << res+1 << endl;
        else cout << "NA" << endl;
    }
}
