#include <iostream>
#include <string>
using namespace std;

int main(){
    string x;
    cin >> x;
    string oku="oku";
    bool flg=true;
    for(int i=0;i<x.size();i++){
        if(x[i]=='c'&&x[i+1]=='h'){
            i++;
        }else{
            bool sflg=false;
            for(int j=0;j<3;j++){
                if(x[i]==oku[j]){
                    sflg=true;
                }
            }
            if(!sflg)flg=false;
        }
        if(!flg)break;
    }
    if(flg)cout << "YES" << endl;
    else cout << "NO" << endl;
}
