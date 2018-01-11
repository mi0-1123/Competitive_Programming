#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin >> n >> x;
    int sum=0,a;
    for(int i=0;i<n;i++){
        cin >> a;
        sum+=a*(x%2);
        x/=2;
    }
    cout << sum << endl;
}
