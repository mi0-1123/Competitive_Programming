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
    Int n,m;
    cin >> n >> m;
    if(n==1||m==1){
        if(n>2||m>2)cout << n*m-2<<endl;
        else if(n==1&&m==1)cout << 1 << endl;
        else cout << 0 << endl;
        //else if(n*m-2*((n-1)+(m-1))<0)cout << 0 << endl;
    }else cout <<n*m-((n-1)+(m-1))*2 <<endl;
}
