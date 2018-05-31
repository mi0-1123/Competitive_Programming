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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res=0;
    REP(i,n){
        vector<bool> tb(26,false),ta(26,false);
        for(int j=0;j<=i;j++)ta[s[j]-'a']=1;
        for(int j=i+1;j<n;j++)tb[s[j]-'a']=1;
        int sum=0;
        REP(j,26){
            if(ta[j]&&tb[j])sum++;
        }
        res=max(res,sum);
    }
    cout << res << endl;
}
