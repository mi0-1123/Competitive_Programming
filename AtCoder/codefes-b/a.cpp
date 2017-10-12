#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int ans;
    for(int i=0;i<s.size();i++){
        if(s[s.size()-i-1]=='F'){
        ans=i;
        break;
        }
    }
    for(int i=0;i<s.size()-ans-1;i++)cout << s[i];
    cout << endl;
    return 0;
}
