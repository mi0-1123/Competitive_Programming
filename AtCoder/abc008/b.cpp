#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> s;
    string name;
    for(int i=0;i<n;i++){
        cin >> name;
        s[name]++;
    }

    int ma=0;
    string ans;
    for(pair<string, int> p:s){
        if(ma < p.second){
            ma = p.second;
            ans = p.first;
        }
    }
    cout << ans << endl;
}
