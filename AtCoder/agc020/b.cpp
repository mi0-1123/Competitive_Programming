#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define Int long long int

int main(){
    int k;
    cin >> k;
    vector<Int> a(k);
    a[k]=1;
    vector<Int> miN(k,0),maN(k,0);
    miN[k-1]=2;
    maN[k-1]=2;

    for(int i=0;i<k;i++)cin >> a[i];
    
    bool maflg,miflg;
    bool resflg=true;

    int j;
    for(int i=k-2;i>=0;i--){
        maflg=miflg=false;
        for(j=0;a[i]*j<miN[i]+a[i];j++){
            if(miN[i+1]<=a[i]*j && a[i]*j<miN[i+1]+a[i+1]){
                miN[i]=a[i]*j;
                miflg=true;
                break;
            }
        }
        for(j=0;a[i]*j<maN[i]+a[i];j++);
        if(maN[i+1]<=a[i]*j && a[i]*j<maN[i+1]+a[i+1]){
            maN[i]=a[i]*j;
            maflg=true;
        }

        if(!(maflg&miflg)){
            resflg=false;
        }
    }

    if(resflg)cout << miN[0] << " " << maN[0]+a[0]-1 << endl;
    else cout << -1 << endl;

}
