#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int sum=0,wg=0;
    for(int i=0;i<n;i++){
        if(wg<a[i]){
            wg+=a[i];
            sum++;
        }
    }

    cout << sum << endl;

}
