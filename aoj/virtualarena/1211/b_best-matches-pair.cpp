#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    string buf = "0123456789";
    vector<string> table;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string str = to_string(a[i]*a[j]);
            //int cou=0;
            if(str[0]-'0'<10-str.size())continue;
            if(buf.substr(str[0]-'0',str.size())==str){
                table.push_back(str);
            }
        }
    }
    sort(table.begin(),table.end());
    reverse(table.begin(),table.end());
    cout << table[0]  << endl;

}
