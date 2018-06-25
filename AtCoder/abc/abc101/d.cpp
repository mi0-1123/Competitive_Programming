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

//    int sum=0;
//    REAP(i,1,1000){
//        if(i%10!=9)continue;
//        int a=0;
//        int n=i;
//        a+=n/100;
//        n%=100;
//        a+=n/10;
//        a+=n%10;
//        cout <<i<<" "<<  setprecision(5) << (double)i/a << endl;;
//
//    }

    ll k;
    cin >> k;
    ll cou=0;
    for(ll i=0;i<k;i++){
        cou++;
        if(cou%10==0)cou++;
        cout << cou%10;
        for(int j=0;j<cou/10;j++)cout << "9";
        cout <<endl;
    }

}

/////////無理！！！！！
