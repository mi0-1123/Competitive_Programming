#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string n;
    cin >> n;
    string tmp = n;
    reverse(tmp.begin(),tmp.end());
    if(n==tmp)cout << "Yes\n";
    else cout << "No\n";
}
