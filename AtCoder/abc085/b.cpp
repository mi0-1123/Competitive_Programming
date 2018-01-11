#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d;
    int moti[101]={};
    for(int i=0;i<n;i++){
        cin >> d;
        moti[d]=1;
    }
    int sum=0;
    for(int i=0;i<=100;i++){
        sum+=moti[i];
    }
    cout << sum << endl;
}

