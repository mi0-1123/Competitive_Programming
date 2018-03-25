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
    
    if(s=="{}"){
        cout << "dict" << endl;
    }else{

        string ans="set";
        int flg=0;

        REP(i,s.size()){

            if(s[i]=='{')flg++;
            else if(s[i]=='}')flg--;

            if(s[i]==':'&&flg==1){
                ans="dict";
            }
        }
        cout << ans << endl;
    }
}
