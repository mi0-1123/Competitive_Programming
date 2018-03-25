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
    int n,q;
    cin >> n >> q;
    int y=1;
    bool flg=true;
    string ans;
    string name="kogakubu10gokan";
    REP(i,n){
        cin >> y;
        if(y>q&&flg){
            ans=name;
            flg=false;
        }
        cin >> name;
    }
    if(flg) cout << name << endl;
    else cout << ans << endl;
    
}
