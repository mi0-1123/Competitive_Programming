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
    int n;
    cin >> n;
    vector<int> p(n+1);
    REP(i,n)cin >> p[i];
    int sum=0;
    for(int i=0;i<n;i++){
        if(i==0){
            if(p[0]>p[1]){
                sum+=p[0]-p[1];
                sum+=p[1]*2;
                p[0]=p[1]=0;
            }else{
                sum+=2*(p[0]);
                p[1]-=p[0];
                p[0]=0;
            }
        }else if(i==n-1){
            if(p[i]>0){
                sum+=p[i];
                p[i]=0;
            }
        }else if(p[i]>0){
            sum+=p[i]*2;
            p[i+1]-=p[i];
            p[i]=0;
        }
//        REP(i,n)cout << p[i]<<(i!=n-1?" ":"\n");
    }
    cout << sum << endl;
}
