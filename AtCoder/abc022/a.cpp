#include<iostream>
using namespace std;

int main(){
    int n,s,t;
    cin >> n >> s >> t;
    int cou=0,w;
    cin >> w;
    if(s<=w && w<=t)cou++;
    for(int i=1;i<n;i++){
        int a;
        cin >> a;
        w+=a;
        if(s<=w && w<=t)cou++;
    }
    cout << cou << endl;
    return 0;
}
