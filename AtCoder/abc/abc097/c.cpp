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
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> vec;
    REAP(i,1,s.size()+1){
        REP(j,s.size()){
            if(i+j<=s.size()){
                string sub=s.substr(j,i);
                vec.pb(sub);
            }
        }
    }
    sort(All(vec));
    int cou=0;
    string f=vec[0];
    if(k!=1){
        for(int i=1;i<vec.size();i++){
            if(f!=vec[i]){
                f=vec[i];
                cou++;
                //            cout << cou << vec[i] << endl;
            }
            if(cou+1==k){
                cout << vec[i] << endl;
                break;
            }
        }
    }else{
        cout << vec[0] << endl;
    }
//    REP(i,vec.size())cout << vec[i] << endl;
//    cout << vec[k-1] << endl;
}
