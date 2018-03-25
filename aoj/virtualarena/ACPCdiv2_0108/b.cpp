#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a;
    cin >> a;
    int frg;

    for(int i=0;i*i*i<=1000000;i++){
        if(a==i*i*i){
            frg=1;
            break;
        }else if(a<i*i*i){
            frg=0;
        }
    }

    if(frg)cout << "YES" << endl;
    else cout << "NO" << endl;
}
