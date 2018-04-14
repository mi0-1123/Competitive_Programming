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
    int n,k;
    cin >> n >> k;
    Int sum=0;
    REAP(i,k,n+1){
        REAP(j,k,i){
            //if(!j)continue;
            for(int l=j;l<=n;l+=i){
                if(!l)continue;
//                printf("(%d,%d), ",l,i);
                sum++;
            }
//            cout << endl;
        }
    }
    cout << sum << endl;
}
