#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << "2018";
    cout << s.substr(4,s.size()-4) << endl;

}
