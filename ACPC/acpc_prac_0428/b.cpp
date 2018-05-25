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
    int n;
    int b;
    cin >> n >> b;
//    vector<pair<int,int> > p(n);
    vector<int> m(n,0);
    int x,y;
    REP(i,b){
        cin >> x >> y;
//        p[x-1].fr++;
//        p[y-1].sc--;
        m[x-1]++;
        m[y-1]--;
    }
//    REP(i,n)cout << m[i] << endl;
//    sort(All(p));

    int flg[n]={};
    int num=n;
    int ma;
    int ans=0;
    vector<int> q;
    while(num){
        ma=-INT_MAX;
        REP(i,n){
            if(flg[i])continue;
            if(ma==m[i]){
                q.pb(i+1);
            }else if(ma<m[i]){
                q.clear();
                q.pb(i+1);
            }
        }
        if(q.size()>1)ans=1;
        REP(i,q.size()){
            flg[q[i]]=1;
            cout << q[i] << endl;
            num--;
        }
    }
//    cout << ans << endl;
}
