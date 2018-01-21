#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long int> a(n);
    for(int i=0;i<n;i++)cin >> a[i];
    int res=-1;
    for(int i=0;;i++){
        for(int j=0;j<n;j++){
            if(a[j]%2){
                res = i;
                break;
            }
            a[j]/=2;
        }
        if(res!=-1)break;
    }
    cout << res << endl;
}
