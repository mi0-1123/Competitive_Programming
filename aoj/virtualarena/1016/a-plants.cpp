#include<iostream>
using namespace std;

int main(){
    int w,h,tim;
    int p;
    cin >> w >> h >> tim;
    cin >> p;
    int hei[50][50]={{}};
    for(int i=0;i<p;i++){
        int x,y,t;
        cin >> x >> y >> t;
        hei[x][y]++;
    }
    int sum=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int a;
            cin >> a;
            //cout << hei[j][i] << " ";
            if(a)sum+=hei[j][i];
        }
      //  cout << endl;
   }
    cout << sum << endl;
}
