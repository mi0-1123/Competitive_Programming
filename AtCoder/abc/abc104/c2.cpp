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
    int d,g;
    cin >> d>>g;
    g/=100;

    vector<int> tab(1e6,1e9+7);

    vector<int> p(d),c(d);
    REP(i,d){
        cin >> p[i] >> c[i];
        c[i]/=100;
    }

    for(int i=d-1;i>=0;i--){
        REP(j,p[i]){
            tab[(i+1)*(j+1)]=min(j+1,tab[(i+1)*(j+1)]);
            if(j==p[i]-1)tab[(i+1)*(j+1)+c[i]]=min(j+1,tab[(i+1)*(j+1)+c[i]]);
        }

    }
    for(int j=1e6-2;j>=0;j--){
        tab[j]=min(tab[j],tab[j+1]);
    }
    for(int i=0;i<=g;i++)cout << i<<" : "<<tab[i] << endl;
    cout << tab[g] << endl;
}
