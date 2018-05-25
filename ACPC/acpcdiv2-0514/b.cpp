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
    ios::sync_with_stdio(false);
    int R,W,c,r;
    while(cin >> R >> W >> c >> r,c){
        double now=(double)R/W;
        int res=0;
        if(now>=c){
            res=0;
        }else{
            while(1){
                R+=r;
                res++;
//                cout << R << endl;
                if(R/W>=c)break;
            }
        }
        cout << res << endl;
    }
}
