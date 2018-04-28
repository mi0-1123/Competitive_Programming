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
    int cou=0;
    REP(i,12){
        cin >> s;
        if((int)s.find('r')!=-1)cou++;
//        cout << (int)s.find("r") << endl;
    }
    cout << cou << endl;
}
