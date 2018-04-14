#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ma=0;
    for(int i=0;i<n;i++)ma=max(i*(n-i),ma);
    cout <<  ma << endl;
}
