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

int table[1000];
vector<int> pn;

void prime(){

    REP(i,1000)table[i]=1;

    for(int i=1;i*i<1000;i++){
        if(table[i+1]){
            pn.pb(i+1);
            for(int j=i;j<1000;j+=i+1)table[i]=0;
        }
    }
}

int main(){
    //prime();

    int a=1;
    for(int i=1;i<1001;i+=a){
        printf("? %d\n",i); 
        fflush(stdout);
        char judge[2]; 
        scanf("%s",judge);

        if(judge=="Y"){
            a=i;
            res=i;
        }
    }
    
}
