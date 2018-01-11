#include <iostream>
using namespace std;

#define Int long long int

int main(){
    int satu[] = {10, 5, 1};
    int n;
    Int y;
    cin >> n >> y;
    y/=1000;
    bool flg = false;
    Int sum = 0;
    int an10,an5,an1;
    for(int i=0;i<=n && satu[0]*i<=y;i++){
        for(int j=0;j<=n-i && satu[0]*i+satu[1]*j<=y;j++){
            sum = satu[0]*i + satu[1]*j + satu[2]*(n-i-j);
            if(sum==y){
                flg=true;
                an10=i;
                an5=j;
                an1=n-i-j;
                break;
            }else if(sum>y)break;
        }
        if(flg)break;
    }

    if(flg)cout << an10 << " " << an5 << " " << an1 << endl;
    else cout << "-1 -1 -1" << endl;
}
