#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    char a[130][130];
    int cou=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(a[i][j]=='o'){
                if(i*j==0){
                    if(i==0 && j==0)cou++;
                    else if(i==0){
                        if(a[0][j-1]=='x')cou++;
                    }else if(j==0){
                        if(a[i-1][0]=='x')cou++;
                    }
                }else{
                    if(a[i][j-1]=='x' && a[i-1][j]=='x')cou++;   
                }
            }
        }
    }
    cout << (cou-1)/3 << endl;
    return 0;
}
