#include <iostream>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    string atmk = "atcoder";
    bool flg = true;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            flg=false;
            if(s[i]=='@'){
                for(int j=0;j<atmk.size();j++){
                    if(t[i]==atmk[j])flg=true;
                }
            }else if(t[i]=='@'){
                for(int j=0;j<atmk.size();j++){
                    if(s[i]==atmk[j])flg=true;
                }
            }
            if(!flg)break;
        }
    }

    if(flg)cout << "You can win" << endl;
    else cout << "You will lose" << endl;
}
