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
    int w,h;
    char c;
    cin >> w >> h >> c;
    REP(i,h){
        REP(j,w){
            if(i==0&&j==0 || i==0&&j==w-1 || i==h-1&&j==0 || i==h-1&&j==w-1){
                cout << "+" ;
            }else if(i==h/2&&j==w/2){
                cout << c;
            }else if(i==0 || i==h-1){
                cout << "-";
            }else if(j==0 || j==w-1){
                cout << "|";
            }else{
                cout << ".";
            }
        }
        cout << endl;
    }
}
