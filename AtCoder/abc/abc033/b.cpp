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
    int n;
    cin >> n;
    string s;
    int p,pmax=0;
    string anss;
    int cou=0;
    REP(i,n){
        cin >> s >> p;
        cou+=p;
        if(pmax<p){
            pmax=p;
            anss=s;
        }
    }

    if(pmax>cou/2){
        cout << anss << endl;
    }else{
        cout << "atcoder" << endl;
    }
}
