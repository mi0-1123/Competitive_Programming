#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int sum0=0,sum1=0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')sum0++;
        else sum1++;
    }
    if(sum0>sum1)cout << sum0 << endl;
    else cout << sum1 << endl;
}
