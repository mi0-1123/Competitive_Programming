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

vector<string> s(3);
int n[3];

char nextch(char ch){
    n[ch-'a']--;
    if(n[ch-'a']==0){
        return ch-'a'+'A';
    }else{
        return s[]
    }

}

int main(){
    cin >> s[0] >> s[1] >> s[2];
    n[0]=s[0].size();
    n[1]=s[1].size();
    n[2]=s[2].size();
    char ans=nextch(s[0][0]);
}
