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
    int q;
    cin >> q;
    REP(i,q){
        string s,t;
        cin>>s>>t;
        bool flg=false;
        REP(k,s.size()){
            int loc=0;
            int trs[26]={};
            int box[26]={};
            //int trs[26]={};
            REAP(j,k,s.size()){
            //    int loc=0;
        //        int trs[26]={};
        //        int box[26]={};
                if(t[loc]==s[j] && trs[s[j]-'a']==0){
                    loc++;
                    box[s[j]-'a']++;
                    if(loc==t.size()){
                        flg=true;
                        break;
                    }
                }else if(t[loc]==s[j]){
                    flg=false;
                    break;
                }else if(loc>0 && box[s[j]-'a']==0){
                    trs[s[j]-'a']++;
                }else if(box[s[j]-'a']>0){
                    flg=false;
                    break;
                }
            }
            if(flg)break;
  //          cout << k <<" ";

        }
        if(flg)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
