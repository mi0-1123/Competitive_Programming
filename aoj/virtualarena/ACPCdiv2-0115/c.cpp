#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string t = "tokyo";
    string k = "kyoto";
    for(int i=0;i<n;i++){
        cin >> s;
        int cou=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='t'){
                if(s.substr(j,5)==t){
                    cou++;
                    j+=4;
                }
            }else if(s[j]=='k'){
                if(s.substr(j,5)==k){
                    cou++;
                    j+=4;
                }
            }
        }
        cout << cou << endl;
    }
}
