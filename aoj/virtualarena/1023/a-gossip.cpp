#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    cin >> a[0];
    int ma=0;
    for(int i=1;i<m;i++){
        cin >> a[i];
        int tmp = (a[i]-a[i-1])/2;
        ma = max(ma,tmp);
    }
    //cout << ma << endl;
   // cout << a[0]-1 << endl;
    ma = max(ma,n-a[m-1]);
    if(ma <= a[0]-1){
        cout << a[0]-1 << endl;
    }else{
        cout << ma << endl;
    }
}
