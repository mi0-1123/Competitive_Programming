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

int  main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    REP(i,n)cin >> a[i];
    REP(i,n)cin >> b[i];

    REP(i,n){
        REP(j,n){
            int k=a[i]+b[j];
            if(k){
                cout << k << endl;
                string s="";
                while(k){
                    s+=k%2+'0';
                    k/=2;
                }
                reverse(All(s));
                cout << s << endl;
            }
        }
    }
}
