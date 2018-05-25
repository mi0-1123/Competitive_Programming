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

#define N 55556

bool num[N];

void pri(){
    num[0]=num[1]=true;
    for(int i=2;i*i<N;i++){
        if(num[i])continue;
        for(int j=2*i;j<N;j+=i){
            num[j]=true;
        }
    }
}

int main(){
    pri();
    int n;
    cin >> n;
    vector<int> res(n,0);
    int cou=0;
    REP(i,N){
        if(num[i]==false && i%5==1){
            res[cou]=i;
            cou++;
        }
        if(cou==n)break;
    }
    REP(i,n){
//        cout << i << " ";
        cout << res[i];
        if(i!=n-1)cout << " ";
//        cout << endl;
    }
    cout << endl;
}
