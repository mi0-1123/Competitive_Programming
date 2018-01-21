#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl

int main(){
    int a,b;
    cin >> a >> b;
    if(a*b%2==0)cout << "Even" << endl;
    else cout << "Odd" << endl;
}
