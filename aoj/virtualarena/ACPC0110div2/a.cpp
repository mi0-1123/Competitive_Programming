#include <iostream>
using namespace std;

int main(){
    long long int n;
    int nigo[]={25,2525,252525,25252525};
    cin >> n;
    long long int flg,sum=0;
    for(long long int i=25;i<=n;i++){
        flg=0;
        for(int j=0;j<4;j++){
            if(i%nigo[j]==0)flg=1;
        }
        if(flg)sum++;
    }
    cout << sum << endl;
}
