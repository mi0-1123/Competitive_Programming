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
    int a,b,c,d;
    int tab[102]={};
    cin >> a >> b >> c >> d;
    tab[a]++;
    tab[c]++;
    tab[b]--;
    tab[d]--;
    int res=0,sum=0;
    REP(i,102){
        sum+=tab[i];
        if(sum==2){
            res++;
        }
    }
    cout << res << endl;
}
