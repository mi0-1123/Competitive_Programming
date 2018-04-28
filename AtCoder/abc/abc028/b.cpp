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
    int cou[6]={};
    REP(i,s.size())cou[s[i]-'A']++;
    REP(i,6){
        cout << cou[i];
        if(i!=5)cout << " ";
    }
    cout << endl;
}
