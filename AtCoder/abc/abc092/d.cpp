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

int n;
int a[200001],b[200001];

int my_lower_bound(int k){
    int low=-1;
    int high=n;
    while(high-low>1){
        int mid=(high+low)/2;
        if(b[mid]>=k){
            high=mid;
        }else{
            low=mid;
        }
    }
    return high;
}

int main(){
    cin >> n;
    REP(i,n)cin >> a[i];
    REP(i,n)cin >> b[i];
    sort(b,b+n);

    int t=1;
    int res=0;
    REP(k,28){
        int io=0;
        REP(i,n){
            io+=(my_lower_bound(2*t-a[i])-my_lower_bound(t-a[i]));
            io+=(my_lower_bound(4*t-a[i])-my_lower_bound(3*t-a[i]));
        }
        cout << io << endl;
        res+=t*(io%2);
        t*=2;
    }
    cout << res << endl;

}
