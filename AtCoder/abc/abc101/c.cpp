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
    ll n,k;
    cin >> n >> k;
    k--;
    vector<int> a(n);
    int left;
    REP(i,n){
        cin >> a[i];
        if(a[i]==1)left=i;
    }
    int right=n-left-1;

//    cout << "r:l " << right << ":"<<left << endl;

    int m=0;
    int sum=left/k;
    m+=left%(k);
    if(m)sum++;

    sum+=right/k;
    m+=right%k;
    if(right%k)sum++;

    if(m<=(k)&&m!=0&&right%k&&left%k)sum--;
    cout << sum << endl;
}
