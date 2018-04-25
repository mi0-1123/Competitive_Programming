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
    int e,y;
    cin >> e >> y;
    if(e==0){
        if(y<1912)cout << "M" << y-1911+44 << endl;
        else if(y<1926)cout << "T" << y-1925+14 << endl;
        else if(y<1989)cout << "S" << y-1988+63 << endl;
        else cout << "H" << y-2016+28 << endl;
    }else if(e==1){
        cout << y-44+1911 << endl;
    }else if(e==2){
        cout << y-14+1925 << endl;
    }else if(e==3){
        cout << y-63+1988 << endl;
    }else{
        cout << y-28+2016 << endl;
    }
}
