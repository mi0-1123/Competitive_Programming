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

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int cou=0;
    REP(i,n){
        cin >> a[i];
        cou+=a[i];
    }
    int h=0,ans=0;
    if(cou%n>0){
        cout << -1 << endl;
    }else{
        REP(i,n){
            h+=a[i]-(cou/n);
            if(h!=0)ans++;
        }
        if(h!=0)cout << "-1" << endl;
        else cout << ans << endl;
    }

}
