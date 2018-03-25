#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    int sum[101][101*2]={{}};

    cin >> a;
    sum[0][0]=a;
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            cin >> a;
            if(j==0){
                sum[i][0]=sum[i-1][0]+a;
            }else{
                for(int t=0;t<2;t++){
                    sum[i][j*2-t] = sum[i-1][2*j-1-t]+a;
                }
            }

        }
    }

    int ma=0;
    for(int i=0;i<=n*2;i++){
        ma = max(ma, sum[n-1][i]);
    }
    cout << ma << endl;
}
