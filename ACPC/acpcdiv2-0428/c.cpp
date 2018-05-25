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
    vector<int> e(4);
    for(int i=0;i<4;i++)cin >> e[i];
    sort(All(e));
    if(e[0]==e[1]&&e[2]==e[3])cout << "yes" << endl;
    else cout << "no" << endl;
}
