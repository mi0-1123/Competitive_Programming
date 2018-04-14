#include <iostream>
#include <algorithm>
using namespace std;

long long fiv(long long n){
    if(n<=2){
        return 1;
    }else{
        return fiv(n-2) + fiv(n-1);
    }
}

int main(){
    int n;
    cin >> n;

    //long long sum;
   if(n>1)cout << fiv(n-1)*2 +fiv(n) << endl;
   else if(n==1)cout << 1 << endl;
   else cout << 2 << endl;
}
