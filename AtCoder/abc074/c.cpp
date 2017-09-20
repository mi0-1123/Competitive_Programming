#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<int> x,y;
    long long int cou=0;
    for(int i=0;i<f;i++){
        for(int j=0;j<f-i;j++){
            x[cou]=a*i+b*j;
            y[cou++]=c*i+d*j;
        }
    }
    long long int mai,maj,ma=0;
    for(int i=0;i<cou;i++){
        for(int j=0;j<cou;j++){
            if(y[j]/x[i]<=e && x[i]+y[j]<f){
                if(ma < y[j]/x[i]){
                    ma=y[j]/x[i];
                    mai=i;
                    maj=j;
                }
            }
        }
    }

    cout << x[mai] << " " << y[maj] << endl;

    return 0;

}
