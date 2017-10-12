#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n!=11)cout << (n+1)%12 << endl;
    else cout<< "12" << endl;
}
