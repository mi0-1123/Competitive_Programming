#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a;
    cin >> n;
    int sum[101][101]={{}};
    cin >> a;
    sum[0][0]=a;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> sum[i][j];
            if(j==0)sum[i][0]+=sum[i-1][0];
            else sum[i][j]+=max(sum[i-1][j-1],sum[i-1][j]);
        }
    }
    sort(sum[n-1],sum[n-1]+n);
    
    cout << sum[n-1][n-1] << endl;
}
