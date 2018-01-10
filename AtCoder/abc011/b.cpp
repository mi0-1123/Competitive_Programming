#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    if('a'<=s[0] && s[0]<='z')cout << (char)(s[0] - 'a' + 'A');
    else cout << s[0];

    for(int i=1;i<s.size();i++){
        if('A' <= s[i] && s[i] <= 'Z')cout << (char)(s[i]-'A' + 'a');
        else cout << s[i];
    }
    cout << endl;
}
