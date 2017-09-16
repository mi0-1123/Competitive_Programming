#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
    int e,f,sg,sum=0,r,ma=0;
    vector<int> wa(3);
    vector<int> sh(3);
    cin >> wa[0] >> wa[1] >> sh[0] >> sh[1] >> e >> f;
    wa[2] = wa[0] + wa[1];
    sh[2] = sh[0] + sh[1];
    sort(wa.begin(), wa.end());
    sort(sh.begin(), sh.end());
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            r = sh[i]/wa[j];
            if(r > ma && sh[i]+wa[j] < f && r <= e){
                ma = r;
                sum = sh[i] + wa[j]*100;
                sg = sh[i];
            }
        }
    }

    cout << sum << " " <<  sg << endl;
    return 0;
}

