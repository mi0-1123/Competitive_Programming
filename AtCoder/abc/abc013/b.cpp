#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << min(abs(a-b),min(abs(10+a-b),abs(a-b-10))) << endl;
}
