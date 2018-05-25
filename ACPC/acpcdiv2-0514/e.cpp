#include<iostream>
#include<numeric>
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

int gcd(int x,int y){
    if(y==0){
        return x;
    }else{
        return gcd(y,x%y);
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    int res=x+y+2;
    if(x<y)swap(x,y);
    int g=gcd(x,y);
    int a=x/g;
    int b=y/g;
    for(int i=0;i*a<x+1;i++){
        res--;
    }
    cout << res << endl;
}
