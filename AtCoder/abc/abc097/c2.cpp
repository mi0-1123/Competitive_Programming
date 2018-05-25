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
    int k;
    cin >> k;
    set<string> sub;
    REP(i,s.size()){
        for(int j=1;j<=k&&i+j<=s.size();j++){
            sub.insert(s.substr(i,j));
        }
    }
    auto itr=sub.begin();
    REP(i,k-1)++itr;
    cout << *itr << endl;
}
