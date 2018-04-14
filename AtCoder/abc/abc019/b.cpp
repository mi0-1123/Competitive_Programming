#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<char,int> zip;
    string s;
    cin >> s;
    cout << s[0];
    int sum=1;
    for(int i=1;i<s.size();i++){
        //zip[s[i]]++;
        if(s[i]==s[i-1]){
            sum++;
        }else{
            cout << sum << s[i];
            sum=1;
        }

    }
//    for(pair<char,int> p:zip){
//        cout << p.first << p.second;
//    }
    cout << sum << endl;
}
