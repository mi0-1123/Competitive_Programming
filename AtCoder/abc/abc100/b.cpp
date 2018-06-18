#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int d,n;
    cin >> d >> n;
    int ans=n;
    if(n==100)ans++;
    for(int i=0;i<d;i++){
        ans*=100;
    }

    cout <<ans<< endl;
}
