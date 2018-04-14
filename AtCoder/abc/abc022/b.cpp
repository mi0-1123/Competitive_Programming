#include <iostream>
#include <vector>
using namespace std;

#define Rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    vector<int> table(100001,0);
    int a;
    Rep(i,n){
        cin >> a;
        table[a]++;
    }
    int sum=0;
    Rep(i,100001){
        if(table[i]>1)sum+=table[i]-1;
    }
    cout << sum << endl;
}
