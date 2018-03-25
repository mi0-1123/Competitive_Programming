#include <iostream>
using namespace std;

int main(){
    long long int n;
    int nigo[]={25,2525,252525,25252525};
    cin >> n;
    long long int sum=0;
    for(int i=25;i<=n;i+=5){
        for(int j=0;j<4 && nigo[j]<=i;j++){
            if(i%nigo[j]==0){
                sum++;
                break;
            }
        }
    }
    cout << sum << endl;
}
