#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > day;
    day.resize(n);
    for(int i=0;i<n;i++){
        cin >> day[i].first >> day[i].second;
    }
    sort(day.begin(),day.end());
    int hpdy[31]={};
    for(pair<int,int>p:day){
        for(int i=p.first-1;i<p.second;i++){
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
