#include<iostream>
using namespace std;

int main(){
    int num,n,h,w,frg=0;
    cin >> num;
    for(int i=num/4;;i++){
        if(frg)break;
        if(!i)continue;
        if((4/num-1/i)<0)continue;
        for(int j=i;j<=i+1;j++){
            if(frg)break;
            if(!j)continue;
            for(int k=j;k<=j+1;k++){
                if(!k)continue;
                if(num<4*i*j*k/(i*j+j*k+k*j))continue;
                if(4*i*j*k==(i*j+j*k+k*i)*num){
                    n=i;
                    h=j;
                    w=k;
                    frg=1;
                    break;
                }
            }
        }
    }
    cout << n << " " << h << " " << w << endl;
    return 0;
}
