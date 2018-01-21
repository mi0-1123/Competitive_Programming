#include <iostream>

using namespace std;

int main(){
    string n;
    cin >> n;
    int x=0;
    int sum=0;
    for(int i=0;i<n.size();i++){
        int num = n[i]-'0';
        sum+=num;
        x+=num;
        x*=10;
    }
    x/=10;
    //cout << x%sum << endl;
    //cout << x << sum << endl;
    if(!(x%sum))cout << "Yes" << endl;
    else cout << "No" << endl;
}
