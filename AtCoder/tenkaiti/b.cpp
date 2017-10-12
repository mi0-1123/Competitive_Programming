#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,b;
    int ma=0,ans;
    for(int i=0;i<n;i++){
    cin >> a >> b;
        if(ma<a){
            ma = a;
            ans=a+b;
        }
    }
    cout << ans << endl;
}
