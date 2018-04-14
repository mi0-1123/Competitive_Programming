#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int a,b;
    cin >> a >> b;
    cin >> s;
    int frg = 1;
    if(s[a]!='-')frg=0;
    for(int i=0;i<a+b+1;i++){
        if(i!=a)if(s[i]<'0' || '9'<s[i])frg=0;
    }
    if(frg)cout << "Yes\n";
    else cout << "No\n";
}
