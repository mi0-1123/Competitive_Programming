#include <iostream>
using namespace std;

int main(){
    long long int x,y;
    cin >> x >> y;
    int sum=1;
    while(1){
        x*=2;
        if(x<=y)sum++;
        else break;
    }
    cout << sum << endl;
}
