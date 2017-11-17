#include <iostream>
#include <map>
using namespace std;

int main(){
    int n,a,d;
    cin >> n >> a >> d;

    map<int, int> mp;
    int m;
    cin >> m;

    for(int i=0;i<m;i++){
        int x,y,z;
        cin >> x >> y >> z;


        if(mp[y]==0){
            mp[y]=y;
        }

        if(mp[z]==0){
            mp[z]=z;
        }

        if(x==0){
            swap(mp[y],mp[z]);
        }else{
            mp[y]=mp[z];
        }
    }

    int k;
    cin >> k;

    if(mp[k]==0){
        mp[k]=k;
    }
    cout << a+(mp[k]-1)*d << endl;
    return 0;
}
