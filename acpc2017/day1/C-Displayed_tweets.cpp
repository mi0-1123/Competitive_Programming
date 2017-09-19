#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k,cou=0;
    int rep(int, int);
    vector<int> a;
    vector<int> rpcou;
    cin >> n >> k;
    int ans;

    for(int i=0;i<n;i++)cin >> a[i];

    int rep(int x,int i){
        if(x!=0 && rpcou[i]<=k){
            rpcou[i]++;
            a[x]=-1;
            return rep(a[x-1],i);
        }else if(rpcou[i]>k){
            ans=rpcou[i]-1;
            a[x]=-1;
            return rep(a[x-1],i);
        }else if(x==0){
            return ans;
        }
    };

    for(int i=n-1;i>=0;i--){
        ans=0;
        if(a[i]==0)cou++;
        else if(a[i]>0){
            cou+=rep(a[i],i);
        }
    }

    cout << cou << endl;

    return 0;
}

//function definition is not allowed here
