#include<iostream>
using namespace std;

int main(){
    int m,f,b;
    cin >> m >> f >> b;
    if(m>=b)cout << "0" << endl;
    else{
        if(b-m<=f){
            int n=b-m;
            cout << n << endl;
        }else{
            cout << "NA" << endl;
        }
    }

    return 0;
}
