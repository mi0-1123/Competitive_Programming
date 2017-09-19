#include<iostream>
#include<vector>
#include<cstdio>
#include<string.h>

//define N 100000

using namespace std;

int main(){
    int n,cou=0,res=0;
    cin >> n;
    char s,b;
    for(int i=0;i<n;i++){
        cin >> s;
        res = i+1;
        if(b=='x' && s=='x'){
            res--;
            break;
        }
        b=s;
    }

    cout << res << endl;

    return 0;
}
