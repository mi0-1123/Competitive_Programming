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
    int n,m,t;
    cin >> n >> m >> t;
    int a;
    vector<int> tim(t,1);
    REP(i,n){
        cin >> a;
        a--;
        for(int j=a-m+1;j<=a+m&&j<t;j++){
            tim[j]=0;
        }
    }
    int sum=0;
    REP(i,t){
        sum+=tim[i];
    }
    cout << sum << endl;
}
