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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<bool> flg(n,false);
    REP(i,n){
        cin>>a[i];
        a[i]--;
    }
    int loc=0,cou=0;
    while(loc!=1){
        cou++;
        if(flg[loc]){
            cout << -1 << endl;
            return 0;
        }
        flg[loc]=1;
        loc=a[loc];
    }
    cout << cou << endl;
}
