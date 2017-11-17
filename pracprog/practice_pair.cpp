#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<pair<string,int> > array;
    array.resize(4);

    array[0] = make_pair("bb", 9);
    array[1] = make_pair("aa", 8);
    array[2] = make_pair("bb", 7);
    array[3] = make_pair("aa", 6);

    sort( array.begin(),array.end() );

    for(pair<string,int>p:array){
        cout << p.first << " " <<p.second<<endl;
    }
    return 0;
}
