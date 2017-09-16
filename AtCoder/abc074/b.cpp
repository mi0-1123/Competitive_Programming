#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k,x,sum=0;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> x;
        sum += min(x,k-x);
    }
    cout << sum*2 << endl;
    return 0;
}
