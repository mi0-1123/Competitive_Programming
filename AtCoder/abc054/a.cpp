#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin  >> a >> b;
    a--;
    b--;
    if(a==b)cout << "Draw" << endl;
    else if((a>b || !a )&& b)cout << "Alice" << endl;
    else cout << "Bob" << endl;
}
