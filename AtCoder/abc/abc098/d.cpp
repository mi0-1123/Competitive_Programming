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
    int tabs[n]={};
    int a;
    int tabxor[n][30]={{}};
    cin >> a;
    tabs[0]=a;
    for(int i=0;;i++){
        tabxor[0][i]=a%2;
        a/=2;
        if(a==0)break;
    }
//    REP(i,21)cout << tabxor[0][i] << (i!=20?" ":"\n");
    REAP(i,1,n){
        cin >> a;
        tabs[i]=tabs[i-1]+a;
        for(int j=0;j<30;j++){
            tabxor[i][j]=tabxor[i-1][j]+a%2;
            a/=2;
        }
    }
//    REP(i,n)cout << tabs[i] << (i!=n-1?" ":"\n");
//    REP(i,21)cout << tabxor[1][i] << (i!=20?" ":"\n");
    ll r=0,l=0;
    ll res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            r=tabs[i];
            if(j!=0)r-=tabs[j-1];
            l=0;
            int xx;
            for(int k=0;k<30;k++){
                xx=tabxor[i][k];
                if(j!=0)xx-=tabxor[j-1][k];
                if(xx%2==1)l+=pow(2,k);
            }
//            cout << j<<" "<<l <<" "<<r<< endl;
            if(l==r)res++;
        }
    }

    cout << res << endl;

}
