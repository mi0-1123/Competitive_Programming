#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin  >> x >>y;
    int num=x+y;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(x*j==y*i){
                num--;
                //cout << i << " " << j<< endl;
            }
        }
    }
    cout << num+1 << endl;
    return 0;
}
