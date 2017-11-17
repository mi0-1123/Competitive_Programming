#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,d;
    cin >> a >> d;
    int m;
    cin >> m;

    vector<int> x,y,z;
    x.resize(m);
    y.resize(m);
    z.resize(m);

    for(int i=0;i<m;i++){
        cin >> x[i] >> y[i] >> z[i];
    }
    int k;
    cin >> k;
    
    for(int i=m-1;i>=0;i--){
        if(x[i]==0){
            if(y[i]==k || z[i]==k){
                k = y[i] + z[i] -k;
            }
        }else{
            if(y[i]==k){
                k=z[i];
            }
        }
    }

    cout << a+d*(k-1) << endl;
    return 0;
}
