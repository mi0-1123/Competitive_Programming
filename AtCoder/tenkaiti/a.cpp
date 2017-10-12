#include<iostream>
using namespace std;

int main(){
    int s;
    cin >> s;
    int res=0;
    for(int i=0;i<6;i++){
        int a=s%10;
        res+=a;
        s/=10;
    }
    cout << res << endl;
    return 0;
}
