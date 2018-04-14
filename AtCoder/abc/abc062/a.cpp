#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a[]={4,6,9,11};
    int x,y;
    cin >> x >> y;
    int frg1=3;
    int frg2=3;

    if(x==2)frg1=1;
    if(y==2)frg2=1;

    for(int i=0;i<4;i++){
        if(x==a[i])frg1=2;
        if(y==a[i])frg2=2;
    }
    if(frg1==frg2)cout << "Yes" << endl;
    else cout << "No" << endl;
}
