#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(!(a[0]-a[2]))cout << 1 << endl;
    else if(!(a[0]-a[1])||!(a[1]-a[2]))cout << 2 << endl;
    else cout << 3 << endl;
}
