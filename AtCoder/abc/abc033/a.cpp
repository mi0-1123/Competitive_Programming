#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    if(s[0]==s[3])cout << "SAME" << endl;
    else cout << "DIFFERENT" << endl;
}
