#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mi=100;
    int t;
    for(int i=0;i<n;i++){
        cin >> t;
        mi = min(mi,t);
    }
    cout << mi << endl;
}
