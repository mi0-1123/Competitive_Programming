#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b==c && a-b==c)cout << "?\n";
    else if(a+b==c)cout << "+\n";
    else if(a-b==c)cout << "-\n";
    else cout << "!\n";
}
