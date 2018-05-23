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
    string s;
    cin >> s;
    vector<char> str;
    REP(i,s.size()){
        if(s[i]=='B'){
            if(str.size()!=0)str.pop_back();
        }else{
            str.push_back(s[i]);
        }
    }
    REP(i,str.size())cout << str[i];
    cout << endl;
}
