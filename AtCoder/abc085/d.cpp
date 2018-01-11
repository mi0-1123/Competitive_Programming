#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define Int long long int

int main(){
    int n;
    Int h;
    cin >> n >> h;
    vector<Int> b(n);
    Int a,maxA=0;
    for(int i=0;i<n;i++){
        cin >> a >> b[i];
        maxA = max(a,maxA);
    }
    Int sum=0,sumB=0;
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(maxA<b[i]){
            sum++;
            sumB+=b[i];
        }
        if(h-sumB<=0)break;
    }
    if(h-sumB<=0)cout << sum << endl;
    else if((h-sumB)%maxA>0)cout << sum+(h-sumB)/maxA+1 << endl;
    else cout << sum+(h-sumB)/maxA << endl;
}
