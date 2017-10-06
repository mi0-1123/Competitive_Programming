#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int n=x%7;
    if(n==0)cout << "thu";
    else if(n==1)cout << "fri";
    else if(n==2)cout << "sat";
    else if(n==3)cout << "sun";
    else if(n==4)cout << "mon";
    else if(n==5)cout << "tue";
    else if(n==6)cout << "wed";

    cout << endl;

    return 0;
}
