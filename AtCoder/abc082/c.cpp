#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <map>
#include <string>
#include <cstdlib>
using namespace std;

#define Int long long int

int main(){
    int n;
    cin >> n;
    //int table[10000]={};a
    map<string, int> table;
    string a;

    for(int i=0;i<n;i++){
        cin >> a;
        table[a]++;
    }

    int sum=0;
    for(pair<string,int> p:table){
        if(stoi(p.first)>p.second)sum+=p.second;
        else sum+=min(p.second-stoi(p.first),p.second);
    }
    cout << sum << endl;
}
