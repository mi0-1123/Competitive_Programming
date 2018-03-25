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
    int a,b;
    cin >> a >> b;
    int pin[10]={};
    REP(i,a){
        int p;
        cin >> p;
        if(p>=7)p-=7;
        else if(p==2||p==3)p+=5;
        else if(p==1)p+=8;
        else if(p==0)p+=3;
        pin[p]=1;
    }

    REP(i,b){
        int p;
        cin >> p;
        if(p>=7)p-=7;
        else if(p==2||p==3)p+=5;
        else if(p==1)p+=8;
        else if(p==0)p+=3;
       
        pin[p]=2;
    }
    REP(i,10){
        if(pin[i]==1)cout << ". ";
        else if(pin[i]==2)cout << "o ";
        else cout << "x ";

        if(i==3)cout << "\n ";
        else if(i==6)cout << "\n  ";
        else if(i==8)cout << "\n   ";
        else if(i==9)cout << endl;
    }
}
