#include <iostream>
using namespace std;

#define N 1000000007
#define Int long long int
int main(){
    Int a,b;
    cin >> a >> b;
    Int sum=0;
    for(Int i=a;i<=b;i++){
        sum+=((i*i*i+i*i)/2)%N;
        sum%=N;
    }
    cout << sum << endl;
}
