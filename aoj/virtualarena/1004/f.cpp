#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cou=0;
    int frg=1;
    for(int i=0;i<s.size();i++){
        if(frg){
            if(s[i]=='A'){
                cou++;
                frg=0;
            }
        }else{
            if(s[i]=='Z'){
                cou++;
                frg=1;
            }
        }
    }

    cou/=2;

    if(cou>=1){
        for(int i=0;i<cou;i++)cout << "AZ";
    }else{
        cout << "-1";
    }
    cout << endl;

    return 0;
}
