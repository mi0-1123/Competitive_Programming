#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    int res=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(k==i*m+j*n-2*i*j)res=1;
        }
    }
    if(res)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
