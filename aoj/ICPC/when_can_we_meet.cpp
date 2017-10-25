#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
    int n,q;
    while(1){
        cin >> n >> q;
        if(!n && !q)break;
        vector<int> date(100000,0);
        int cou=0,m;
        for(int i=0;i<n;i++){
            cin >> m;
            for(int j=0;j<m;j++){
                scanf("%d",&date[cou++]);
            }
        }
        sort(date.begin(),date.begin()+cou);
        int dacou = 1,mada=0,day;
        for(int i=1;i<=cou;i++){
            //cout << date[i-1] << " ";
            if(date[i]==date[i-1]){
                dacou++;
            }else{
                if(mada < dacou){
                    mada = dacou;
                    day = date[i-1];
                }
                dacou = 1;
            }
        }
      //  date.erase(date.begin(),date.end());
        if(mada<q)cout << "0\n";
        else cout << day << endl;
    }
}
