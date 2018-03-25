#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s,t;
    int table[100001]={};
    for(int i=0;i<n;i++){
        cin >> s >> t;
        for(int j=s;j<t;j++){
            table[j]++;
        }
    }
    //for(int i=0;i<12;i++)cout <<table[i] << endl;
    sort(table,table+100001);
    reverse(table,table+100001);
    cout << table[0]-1 << endl;
}
