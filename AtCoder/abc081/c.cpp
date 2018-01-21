#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> table(n,0);
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        table[a-1]++;
    }
    sort(table.begin(),table.end());
    //reverse(table.begin(),table.end());
    int sum=0;
    for(int i=0;i<n;i++){
        if(table[i]>0)sum++;
    }
    //for(int i=0;i<n;i++){
    //    cout << table[i] << " ";
    //}
    //cout << endl;
    int res=0;
    //cout << "sum:" << sum << endl;
    int cou=0;
    for(int i=0;i<n;i++){
        if(cou>=sum-k)break;
        if(table[i]>0){
            res+=table[i];
            cou++;
        }
    }

    cout << res << endl;
}
