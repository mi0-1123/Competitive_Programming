#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl

int main(){
    int n;
    cin >> n;
    bool flg=true;
    vector<int> t(n+1),x(n+1),y(n+1);
    t[0]=x[0]=y[0]=0;
    for(int i=1;i<=n;i++){
        cin >> t[i] >> x[i] >> y[i];
        int ca = t[i]-t[i-1]-(x[i]-x[i-1])-(y[i]-y[i-1]);
        if(ca%2>0 || ca<0){
            flg=false;
        }
    }

    if(flg)YES;
    else NO;
}
