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

int main(){

    int a,b;
    cin >> a >> b;
    int cou=0;
    REAP(i,a,b+1){
        string s=to_string(i);
        string t=s;
        reverse(All(t));
        if(t==s)cou++;
    }
    cout << cou << endl;
}
