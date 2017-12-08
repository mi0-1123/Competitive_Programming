#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;

    while(cin >> n,n){
        vector<int> m(n);
        int set[100][100]={{}};
        for(int i=0;i<n;i++){
            cin >> m[i];
            for(int j=0;j<m[i];j++){
                int p;
                cin >> p;
                set[i][p]=1;
            }
        }

        int k;
        cin >> k;
        vector<int> l(k);
        for(int i=0;i<k;i++){
            cin >> l[i];
        }

        int frg=0;
        for(int i=0;i<n;i++){
            int sfrg=1;
            for(int j=0;j<k;j++){
                sfrg*=set[i][l[j]];
            }
            if(sfrg==1){
                if(frg==0)frg=i+1;
                else frg=-1;
            }
        }
        if(frg>0)cout << frg << endl;
        else cout << -1 << endl;
    }
    return 0;
}
