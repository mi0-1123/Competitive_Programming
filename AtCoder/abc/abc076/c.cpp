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
    string t;
    cin >> s >> t;
    int itr;
    bool flg=false;
//    REP(i,s.size()){
//        REP(j,t.size()){
//            if(s[i+j]!='?'&&s[i+j]!=t[j]){
//                break;
//            }
//            if(j==t.size()-1){
//                itr=i;
//                flg=true;
//            }
//        }
//        if(flg)break;
//    }

    for(int i=s.size()-1;i>=0;i--){
        for(int j=0;j<t.size();j++){
            if(s[i-j]!=t[t.size()-1-j]&&s[i-j]!='?'){
                break;
            }
            if(j==t.size()-1){
                itr=i-j;
                flg=true;
            }
        }
        if(flg)break;
    }
    if(flg&& s.size()>=t.size()){
        REP(i,s.size()){
            if(i==itr){
                cout << t;
                i+=t.size();
            }else if(s[i]=='?'){
                cout << 'a';
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }else{
        cout << "UNRESTORABLE" << endl;
    }
}
