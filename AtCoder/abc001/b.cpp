#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int m;
    cin >> m;
    double km = m;
    km/=1000;
    if(km<0.1){
        cout << "00" << endl;
    }else if(km<=5){
        km*=10;
        printf("%02.0f\n",km);
    }else if(km<=30){
        cout << km+50 << endl;
    }else if(km<=70){
        cout << (km-30)/5 + 80 << endl;
    }else{
        cout << 89 << endl;
    }
}
