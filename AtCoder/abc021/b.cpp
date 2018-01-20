#include <iostream>
#include <vector>
using namespace std;

#define Rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int k;
    cin >> k;
    vector<int> table(n,0);
    table[a-1]++;
    table[b-1]++;
    int p;
    Rep(i,k){
        cin >> p;
        table[p-1]++;
    }
    bool flg=true;
    Rep(i,n){
        if(table[i]>1)flg=false;
    }
    if(flg)cout << "YES" << endl;
    else cout << "NO" << endl;

}
