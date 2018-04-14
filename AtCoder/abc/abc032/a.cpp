#include<iostream>
using namespace std;

int main(){
    int a,b,h;
    cin >> a >> b >> h;
    for(int i=h;;i++){
        if(i%a==0 && i%b==0){
            cout << i << endl;
            break;
        }
    }
}
