#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<3;i++){
        sum+=s[i]-'0';
    }
    cout << sum << endl;
}
