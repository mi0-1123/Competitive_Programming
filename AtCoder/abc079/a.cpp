#include <iostream>
#include <string>
using namespace std;

int main(){
    int frg = 0;
    string s;
    cin >> s;
    for(int i = 0;i<2;i++)if(s[i]==s[i+1] && s[i+1]==s[i+2])frg=1;
    if(frg)cout << "Yes" << endl;
    else cout << "No" << endl;
}
