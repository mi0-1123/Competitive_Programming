#include<iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double taka = (double)b/a;
    double ao = (double)d/c;
    if(taka > ao)cout << "TAKAHASHI" << endl;
    else if(taka < ao)cout << "AOKI" << endl;
    else cout << "DRAW" << endl;
}
