#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int n,d;
    int t,f,maxt=0
    int s[100000][100000];
    cin >> n >> d;
    for(int i=0;i<n;i++){
        cin >> t >> f;
        if(maxt>t)maxt=t;
        if(t<f){
            ans=-1;
            break;
        }else{
            s[i][t]=f;
        }

    }

    return 0;
}
