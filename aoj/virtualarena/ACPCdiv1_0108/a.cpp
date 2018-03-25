#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> s(3);
    cin >> s[0] >> s[1] >> s[2];
    vector<int> a(26,0),b(26,0),c(26,0);
    for(int i=0;i<s[0].size();i++){
        a[s[0][i]-'A']++;
        b[s[1][i]-'A']++;
        c[s[2][i]-'A']++;
    }
    
}
