#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,sum=0,cou=0;
    for(int i=0;i<n;i++){
        if(cin >> a,a){
            sum+=a;
            cou++;
        }
    }
    if(sum%cou)cout << sum/cou+1 << endl;
    else cout << sum/cou << endl;
}
