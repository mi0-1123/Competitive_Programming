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
    cin >> s;
    int t;
    cin >> t;
    int x,y,n;
    x=y=n=0;
    REP(i,s.size()){
        if(s[i]=='L')x--;
        else if(s[i]=='R')x++;
        else if(s[i]=='U')y++;
        else if(s[i]=='D')y--;
        else n++;
    }
    //n%=2;
    int ans=0;
    ans=abs(x)+abs(y);
    if(t==2){
        if(ans<n){
            ans-=n;
            ans=abs(ans);
            ans%=2;
        }else{
            ans-=n;
        }
    }else{
        ans+=n;
    }
    cout << ans << endl;
}
