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

bool check(string t,string sub){
    REP(i,t.size()){
        if(t[i]!=sub[i]&&sub[i]!='?')return false;
    }
    return true;
}

int main(){
    string s,t;
    cin >> s >> t;
    int slen=s.size();
    int tlen=t.size();
    if(slen<tlen){
        cout << "UNRESTORABLE" << endl;
        return 0;
    }
    for(int i=slen-tlen;i>=0;i--){
        string sub=s.substr(i,tlen);
        if(check(t,sub)){
            REP(j,tlen)s[i+j]=t[j];
            REP(j,slen){
                if(s[j]=='?')s[j]='a';
            }
            cout << s << endl;
            return 0;
        }
    }

    cout << "UNRESTORABLE" << endl;
    return 0;
}
