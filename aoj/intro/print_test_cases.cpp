#include<iostream>

using namespace std;

int main(){
    int i=1,x;
    cin >> x;
    while(x){
        cout << "Case " << i++ << ": " << x << endl;
        cin >> x;
    }
    return 0;
}
