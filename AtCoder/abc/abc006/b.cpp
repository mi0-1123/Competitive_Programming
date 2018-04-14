#include <iostream>
#include <vector>
using namespace std;

#define N 10007

int main(){
    int n;
    cin >> n;
    vector<int> tori(n);
    tori[0]=tori[1]=0;
    tori[2]=1;
    for(int i=3;i<n;i++){
        tori[i]=(tori[i-1]+tori[i-2]+tori[i-3])%N;
    }
    cout << tori[n-1] << endl;
}
