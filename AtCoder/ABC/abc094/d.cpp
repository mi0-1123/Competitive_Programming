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
    int num;
    Int r,n=0;

    cin >> num;
    vector<Int> a(num);
    int mai;
    REP(i,num){
        cin >> a[i];
        if(n<a[i])mai=i;
        n = max(n,a[i]);
    }

    Int mi=1000000000;
    REP(i,num){
        if(mi>abs(n/2-a[i])&&i!=mai){
            mi=abs(n/2-a[i]);
            r=a[i];
            //cout << i << ":" <<r<<":"<<mi<< endl;
        }else if(mi==abs(n/2-a[i])&&mai!=i){
            if((n+1)/2-r>(n+1)/2-a[i]){
                r=a[i];
            }
        }
    }

    cout << n << " " << r << endl;
}
