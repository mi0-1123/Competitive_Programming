#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    a*=100;
    b*=100;
    int maxs,maxw;
    double ma;
    for(int i=0;a*i<f;i++){
        for(int j=0;a*i+j*b<f;j++){
            for(int k=0;a*i+b*j+k*d<f;k++){
                for(int l=0;a*i+b*j+c*k+l*c<f;l++){
                    int wa=a*i+b*j;
                    int sh=c*k+d*l;
                    if(wa==0 || sh==0)continue;
                    if(wa+sh>f)break;
                    if(sh*100>e*wa)break;
                    if(ma*(wa+sh)<100*sh){
                        ma=(double)100*sh/(wa+sh);
                        maxw=wa+sh;
                        maxs=sh;
                    }
                }
            }
        }
    }
    if(maxw==0 && maxs==0)maxw=a;
    cout << maxw << " " << maxs << endl;
    return 0;
}
