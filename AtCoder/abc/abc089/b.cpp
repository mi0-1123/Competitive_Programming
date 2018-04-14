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
    string s;
    bool flg=false;
    REP(i,n){
        cin >> s;
        if(s=="Y")flg=true;
    }
    if(flg)cout << "Four" << endl;
    else cout << "Three" << endl;
}
