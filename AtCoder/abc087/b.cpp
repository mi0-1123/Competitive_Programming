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
    int co[]={500,100,50};
    int a,b,c;
    cin >> a >> b >> c;
    int x;
    cin >> x;
    int res=0;
    REP(i,a+1){
        REP(j,b+1){
            REP(k,c+1){
                if(co[0]*i+co[1]*j+co[2]*k == x){
//                    cout << i << " "<<j<<" "<<k<<":";
                    res++;
                    break;
                }
            }
        }
    }

    cout << res << endl;
}
