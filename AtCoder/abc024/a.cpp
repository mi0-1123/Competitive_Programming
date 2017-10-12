#include<iostream>
using namespace std;

int main(){
    int a,b,c,k,s,t;
    cin >> a >> b >> c >> k >> s >> t;
    int sum=a*s + b*t;
    if(s+t>k-1)cout << sum-(s+t)*c << endl;
    else cout << sum << endl;
}
