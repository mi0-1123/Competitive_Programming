#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+2);
    a[0]=0;
    a[1]=1;
    for(int i=2;i<=n+1;i++){
        a[i]=a[i-1]+a[i-2];
    }

    cout << a[n+1] << endl;
}
