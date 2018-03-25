#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);

    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    //int c=n;
    int cou=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(s[i][j]=='.'){
                cou++;
                int jj=j;
                while(j>=0)s[i][j--]='o';
                while(jj<n)s[i+1][jj++]='o';
                break;
            }
        }
    }

    cout << cou << endl;
}
