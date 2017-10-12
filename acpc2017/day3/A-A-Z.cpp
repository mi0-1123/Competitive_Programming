#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int fn='A';
    int cou=0;
    //cout << fn << endl;
    for(int i=0;i<s.size();i++){
        if(s[i] <= fn )cou++;
        fn=s[i];
    }

    cout << cou << endl;
    return 0;
}
