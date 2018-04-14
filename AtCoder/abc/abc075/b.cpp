#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int h,w;
    cin >> h >> w;
 //   int ma[][];
    vector<string> s(h,"");
    for(int i=0;i<h;i++){
        cin >> s[i];
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            int cou=0;
            if(s[i][j]=='.'){
                 for(int a=0;a<3;a++){
                     if(i-1+a<0 || i-1+a>=h)continue;
                    for(int b=0;b<3;b++){
                        if(j-1+b<0 || j-1+b>w-1)continue;
                        if(s[i-1+a][j-1+b]=='#')cou++;
                    }
                }
                cout << cou;
            }else cout << s[i][j];
        }
        cout << endl;
    }


}
