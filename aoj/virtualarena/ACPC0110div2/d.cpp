#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> k(n,1);
    cin >> k[0];
    cout << k[0];
    for(int i=1;i<n-1;i++){
        cout << " ";
        cin >> k[i];
        cout << min(k[i],k[i-1]);
    }
    cout << " " << k[n-2]<<endl;
}
