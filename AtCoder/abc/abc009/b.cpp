#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int table[1001]={};
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        table[a]++;
    }
    int count=0;
    for(int i=1000;i>=0;i--){
        if(table[i]>0)count++;
        if(count==2){
            cout << i << endl;
            break;
        }
    }
}
