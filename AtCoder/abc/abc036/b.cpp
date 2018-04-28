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
    char s[51][51];
    int n;
    cin >> n;
    REP(i,n){
        REP(j,n){
            cin >> s[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout << s[j][i];
        }
        cout << endl;
    }
}
