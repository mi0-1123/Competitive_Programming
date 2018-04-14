#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <math.h>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl

int main(){
    string a,b;
    cin >> a >> b;
    string c=a+b;
    double num=0;
    REP(i,c.size()){
        num*=10;
        num+=c[i]-'0';
    }
    double d=sqrt(num);
    int in=d;
    if(d-in>0)NO;
    else YES;

}
