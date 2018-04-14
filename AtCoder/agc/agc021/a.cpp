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
    string n;
    cin >> n;
    int sum=0;
    for(int i=n.size()-1;i>0;i--){
        if(n[i]=='9')sum+=9;
        else{
            n[i-1]--;
            sum+=9;
        }
    }
    if(n[0]>'0')sum+=n[0]-'0';
    cout << sum << endl;
}
