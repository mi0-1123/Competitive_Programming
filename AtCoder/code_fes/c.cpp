#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
    //cout << h <<" "<< w<< endl;
    int g1=0,g2=0,g4=(h/2)*(w/2);
    if(h*w%2>0){
        g1=1;
        g2=h/2+w/2;
    }else if(h%2>0)g2=w/2;
    else if(w%2>0)g2=h/2;
   // cout << g1 << " " << g2 << " " << g4 << endl;
    vector<int> alf(30,0);
    for(int i=0;i<h;i++){ 
        for(int j=0;j<w;j++){
            char c;
            cin >> c;
            int n=c;
            alf[n-97]++;
        }
    }
    for(int i=0;i<30;i++){
        //cout << alf[i] << endl;
        g4-=alf[i]/4;
        alf[i]%=4;
        g2-=alf[i]/2;
        alf[i]%=2;
        g1-=alf[i];
    }
    //cout << g1 << " " << g2 << " " << g4 << endl;
    if(g1==0 && g2==0 && g4==0)cout << "Yes" << endl;
    else if(g1==0 && g4<0 && g2+g4*2==0)cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
