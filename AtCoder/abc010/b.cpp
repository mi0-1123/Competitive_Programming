#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        while(a%2==0 || a%3==2){
            a--;
            sum++;
        }
    }
    cout << sum << endl;
}
