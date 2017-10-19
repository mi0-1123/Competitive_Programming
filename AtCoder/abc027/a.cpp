#include<iostream>
using namespace std;

int main(){
    int l[10]={},a;
    for(int i=0;i<3;i++){
        cin >> a;
        l[a-1]++;
    }
    for(int i=0;i<10;i++){
        if(l[i]%2){
            cout << i+1 << endl; 
            break;
        }
    }
    return 0;
}
