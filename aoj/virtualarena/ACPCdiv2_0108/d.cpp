#include <iostream>
using namespace std;

int main(){
    int n,b,c;
    cin >> n >> b >> c;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int res=0,sum=0;
    for(int i=n-1;i>=0;i--){
        sum+=b;
        if(sum>=c){
            sum-=b;
            res+=a[i]*(c-sum);
            break;
        }
        res+=a[i]*b;
    }
    cout << res << endl;
}
