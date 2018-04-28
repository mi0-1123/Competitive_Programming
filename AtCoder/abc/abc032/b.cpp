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
    string s;
    cin >> s;
    int k;
    cin >> k;
//    cout << s.size()<< " " << k;
    if(k<=s.size()){
        map<string,int> m;
        for(int i=0;i<s.size()-k+1;i++){
            string t;
            t=s.substr(i,k);
            m[t]=1;
        }

        int ans=0;
        for(pair<string,int> p:m){
            ans+=p.sc;
        }
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }
}
