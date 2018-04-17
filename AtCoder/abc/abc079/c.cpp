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

int pls(int x,int sign){
    if(!sign)return x;
    else return x*(-1);
}

char sign(int i){
    if(!i)return '+';
    else return '-';
}

int main(){

    string s;
    cin >> s;

    int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0',d=s[3]-'0';
    bool flg=false;
    REP(i,2){
        REP(j,2){
            REP(k,2){
                if(a+pls(b,i)+pls(c,j)+pls(d,k)==7){
                    cout <<a<<sign(i)<<b<<sign(j)<<c<<sign(k)<<d<<"=7"<<endl;
                    return 0;
                }
            }
        }
    }

}
