#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    ll a,b,c,d;
    REP(i,t){
        cin >> a >> b >> c >> d;
        if(a<b)NO;
        else if(b>d) NO;
        else if(b==d){
            if(a-b>c) NO;
            else YES;
        }else if(c>=b){
            YES;
        }else{
            if(a%b>c) NO;
            else{
                bool flg=true;
                for(ll j=c+1;j<b;j++){
                    if(j%(d-b)==0){
                        flg=false;
                        break;
                    }
                }
                if(flg) YES;
                else NO;
            }
        }
    }
    return 0;
}
