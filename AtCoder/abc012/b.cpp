#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
     cin >> n;
     int h=n/60/60;
     n%=3600;
     int m=n/60;
     n%=60;
     printf("%02d:%02d:%02d\n",h,m,n);
}
