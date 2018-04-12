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
    int a,b,c;
    cin >> a >> b >> c;
    int ma=max(a,max(b,c));
    int en;
    if(a%2==b%2 && b%2==c%2){
        en=0;
    }else if(ma%2==(a+b+c)%2){
        en=1;
    }else{
        ma++;
        en=1;
    }

   en+=(ma-a)/2;
   en+=(ma-b)/2;
   en+=(ma-c)/2;

   cout << en << endl;

}
