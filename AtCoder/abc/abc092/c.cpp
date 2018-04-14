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
    int n;
    cin >> n;
    vector<int> a(n+2,0),dif(n+1),bw(n+1);
    int sum=0;
    REP(i,n){
        cin >> a[i+1];
        bw[i]=abs(a[i+1]-a[i]);
        sum+=bw[i];
        if(i>0){
            int bf=bw[i]+bw[i-1];
            int af=abs(a[i+1]-a[i-1]);
            dif[i]=af-bf;
            //cout << bf <<" "<<af << endl;
        }
    }
    bw[n]=abs(a[n+1]-a[n]);
    sum+=bw[n];
    //cout << sum << endl;
    int bbf=bw[n]+bw[n-1];
    int aaf=abs(a[n+1]-a[n-1]);
    dif[n]=aaf-bbf;

    //REP(i,n+1)cout << bw[i] << endl;
    //REP(i,n)cout << dif[i+1] << endl;
    for(int i=1;i<=n;i++){
        cout << sum+dif[i] << endl;
    }
}
