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
    string sa,sb,sc;
    cin >> sa >> sb >> sc;
    int a,b,c;
    a=b=c=0;
    int next=0;
    while(sa.size()+1!=a&&sb.size()+1!=b&&sc.size()+1!=c){
        if(next==0){
            next=sa[a]-'a';
            a++;
        }else if(next==1){
            next=sb[b]-'a';
            b++;
        }else{
            next=sc[c]-'a';
            c++;
        }
    }
    if(sa.size()+1==a)cout << "A" << endl;
    else if(sb.size()+1==b)cout << "B" << endl;
    else cout << "C" << endl;
}
