#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,1,2,3}; //c++11から
    
    cout << "v.size() = " << v.size() << endl;

    for(int i=0;i<6;i++)cout << v[i] << endl;

    for(int x:v){   //この書き方はc++11から
        cout << x << endl;
    }
    return 0;
}
