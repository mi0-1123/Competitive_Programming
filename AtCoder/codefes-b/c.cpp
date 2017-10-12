#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[100000],b[100000];
    for(int i=0;i<m;i++)cin >> a[i] >> b[i];
    if(n<6)cout << n*(n-1)/2 - m << endl;
    else cout << n*(n-1)/2-n-m << endl;
}
