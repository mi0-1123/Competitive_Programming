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

    string s;
    cin >> s;

    bool flg=true;

    if(s[0]!='A')flg=false;
    if(s[1]<'a'||'z'<s[1])flg=false;
    int cou=0;
    REAP(i,2,s.size()-1){
        if(s[i]=='C')cou++;
        else if('a'>s[i]||s[i]>'z')flg=false;
    }
    if(cou!=1)flg=false;
    if(s[s.size()-1]<'a'||s[s.size()-1]>'z')flg=false;

    if(flg)cout << "AC\n";
    else cout << "WA\n";

    return 0;
}
