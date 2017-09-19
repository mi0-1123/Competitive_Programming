#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    int h = t/30;
    int m = (t%30)*2;
    cout << h << " " << m << endl;
    return 0;
}
