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
    map<string, int> card;
    int n;
    cin >> n;
    string s;
    REP(i,n){
        cin >> s;
        if(!card[s])card[s]=1;
        else card[s]++;
    }
    int m;
    cin >> m;
    REP(i,m){
        cin >> s;
        if(!card[s])card[s]=-1;
        else card[s]--;
    }
    //sort(All(card));
    //reverse(All(card));
    int ma=0;
    for(pair<string, int> p:card){
        ma=max(ma,p.second);
    }
    cout << ma << endl;
}
