#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()

ll L[100];
ll lucas(){
    REAP(i,2,99){
        L[i]=L[i-1]+L[i-2];
    }
}

int main(){
    L[0]=2;
    L[1]=1;
    int n;
    cin >> n;
    lucas();
    cout << L[n] << endl;
}
