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
    cin >> s;
    string tmp="abc";

    bool flg=true;
    int k;
    if(s[0]=='c'){
        REP(i,n)if(s[i]!=tmp[(i+2)%3])flg=false;
    }else if(s[0]=='b'){
        REP(i,n)if(s[i]!=tmp[(i+1)%3])flg=false;
    }else{
        REP(i,n)if(s[i]!=tmp[i%3])flg=false;
    }
    if(flg&&s[n/2]=='b'&&n%2){
        cout << (n+1)/2-1 << endl;
    }else{
        cout << -1 << endl;
    }
}
