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
    int t,n;
    REP(i,4){
        cin >> t >> n;
        if(t==1)cout << n*6000 << endl;
        else if(t==2)cout << n*4000 << endl;
        else if(t==3)cout << 3000*n<< endl;
        else cout << 2000*n << endl;
    }
}
