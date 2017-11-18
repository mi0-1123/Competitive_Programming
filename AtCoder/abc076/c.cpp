#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    int cou = 0;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]){
                int loc = j;
                if(cou > j){
                    if(s[i+j-loc]==t[j] || s[i+j-loc]=='?')
                }else{
                    cou = 0;
                    break;
                }
            }
        }
        if(s[i]=='?')cou++;
    }
}
