#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<tuple<int,int,int> > day;
    day.resize(n);
    for(int i=0;i<n;i++){
        int st,en;
        cin >> st >> en;
        day[i] = make_tuple(en-st+1, st-1, en-1);
    }
    sort(day.begin(),day.end());
    int hpdy[31]={};
    for(tuple<int,int,int>p:day){
        for(int i=get<1>(p);i<=get<2>(p);i++){
            if(hpdy[i]==0){
                hpdy[i]=1;
                break;
            }
        }
    }
    int sum=0;
    for(int i=0;i<31;i++){
        sum+=hpdy[i]+1;
    }
    cout << sum*50 << endl;
}
