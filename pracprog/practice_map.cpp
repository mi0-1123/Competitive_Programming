#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> A;
    
    A[ "xxx" ]=5;
    A[ "y" ]=10;
    A[ "xxx" ]+=2;
    
    cout << A["xxx"] <<endl;
    cout << A["y"] <<endl;
    cout << A["?"] <<endl;

    cout << A.size()<<endl;

    //c++
    for(pair <string, int > p:A){
        string fi=p.first;
        int se=p.second;
        cout << fi <<' ' <<se<<endl;
    }
    return 0;
}
