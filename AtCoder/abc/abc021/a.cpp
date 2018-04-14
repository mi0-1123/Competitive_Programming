#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cou=n/2;
    if(n%2>0)cou+=1;
    cout << cou << endl;
    if(n%2>0)cout << "1\n";
    for(int i=0;i<n/2;i++)cout << "2" << endl;
}
