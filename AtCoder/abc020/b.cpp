#include <iostream>
#include <string>
using namespace std;

#define Int long long int
#define Rep(i,n) for(int i=0;i<n;i++)


int main(){
    int a;
    string b;
    cin >> a >> b;
    int sum=a;
    Rep(i,b.size()){
        sum*=10;
        sum+=b[i]-'0';
    }
    cout << sum*2 << endl;
}
