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
    int n,l;
    cin >> n >> l;
    vector<string> s(n);
    REP(i,n){
        cin >> s[i];
//        sort(All(s[i]));
    }
    sort(All(s));
    REP(i,n)cout << s[i];
    cout << endl;
}
