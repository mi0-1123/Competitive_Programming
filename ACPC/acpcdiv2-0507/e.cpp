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
    int q;
    cin >> q;
    int c,a,n,ans;
    REP(i,q){
        cin >> c >> a >> n;
        ans=0;
        if(c>0&&a>0&&n>0){
            int mi=min(c,min(a,n));
            ans+=mi;
            a-=mi;
            c-=mi;
        }
        if(a>0&&c>1){
            if(c/2>=a){
                ans+=a;
                c-=a*2;
            }else{
                ans+=c/2;
                c%=2;
            }
        }
        if(c>0)ans+=c/3;
        cout << ans << endl;
    }
}
