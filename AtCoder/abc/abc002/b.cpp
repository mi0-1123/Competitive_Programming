#include <iostream>
using namespace std;

int main(){
    string w;
    cin >> w;

    int flg;
    string a = "aiueo";
    for(int i=0;i<w.size();i++){
        flg = 1;
        for(int j=0;j<5;j++){
            if(w[i]==a[j])flg=0;
        }
        if(flg)cout << w[i];
    }
    cout << endl;
}
