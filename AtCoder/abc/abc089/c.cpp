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
    int n;
    cin >> n;
    vector<int> vc(5,0);
    string s;
    string march = "MARCH";
    REP(i,n){
        cin >> s;
        REP(i,5){
            if(s[0]==march[i]){
                vc[i]++;
                break;
            }
        }
        s="";
    }

    //REP(i,5)cout << vc[i] << endl;
    unsigned Int ans=0;

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<5;k++){
                ans+=vc[i]*vc[j]*vc[k];
            }
        }
    }

    cout << ans << endl;
}
