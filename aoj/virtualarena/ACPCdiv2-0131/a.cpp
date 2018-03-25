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

    string s;
    cin >> s;
    int y[10]={},da[10]={};
    REP(i,s.size()){
        if(i<4){
            y[s[i]-'0']++;
        }else if(i==5||i==6||i==8||i==9){
            da[s[i]-'0']++;
        }
    }
    int flg=1;
    REP(i,10){
        if(y[i]!=da[i])flg=0;
    }
    if(flg) cout << "yes" << endl;
    else cout << "no" << endl;
}
