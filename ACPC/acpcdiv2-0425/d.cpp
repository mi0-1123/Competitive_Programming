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
    int res=0;
    int n;
    char c;
    cin >> res;
    while(1){
        cin >> c;
        if(c=='=')break;
        cin >> n;
        if(c=='+')res+=n;
        else if(c=='-')res-=n;
        else if(c=='*')res*=n;
        else if(c=='/')res/=n;
    }
    cout <<res << endl;
}
