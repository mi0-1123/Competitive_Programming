#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    vector<char> s(5);
    for(int i=0;i<5;i++)cin >> s[i];
    sort(s.begin(),s.end());
    //for(int i=0;i<5;i++)cout << s[i];
    //cout << endl;
    int n;
    cin >> n;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            //cout << s[i-1] << s[j-1] << endl;
            if((i-1)*5+j==n){
                cout << s[i-1] << s[j-1] << endl;
                i=5;
                break;
            }
        }
    }

}
