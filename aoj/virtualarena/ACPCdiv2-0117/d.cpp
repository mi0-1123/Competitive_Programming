#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int > a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<int> p(n/2);
    for(int i=0;i<n/2;i++){
        p[i]=a[i]+a[n-1-i];
    }
    sort(p.begin(),p.end());
    cout << p[n/2-1]-p[0] << endl;
}
