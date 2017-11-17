#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a,b;
    vector<int> frg(n,0);
    vector<int> dou(n);
    int vi=n,city=m;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        if(frg[a-1]==0&&frg[b-1]==0){
            vi-=2;
        }else if(frg[a-1]*frg[b-1]==0){
            city--;
            vi--;
        }else if(frg[a-1]){
            city-=2;
        }
            frg[a-1]++;
            frg[b-1]++;
    }
    cout << abs(city-vi) << endl;
}
