#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int res=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='2'){
            for(int j=0;;j+=2){
                if(s[i+j]=='2' && s[i+j+1]=='5')res++;
                else break;
            }
        }
    }
    cout << res << endl;
}
