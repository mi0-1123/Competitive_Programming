#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
        vector<int> m(n);
        //vector<vector<int> > p;
        int p[100][100];
        for(int i=0;i<n;i++){
            cin >> m[i];
            for(int j=0;j<m[i];j++){
                cin >> p[i][j];
            }
            //sort(p[i].begin(),p[i].end());
        }

        int k;
        cin >> k;
        vector<int> l(k);
        for(int i=0;i<k;i++){
            cin >> l[i];
        }
        //sort(l.begin(),l.end());

        int frg=0;
        for(int i=0;i<n;i++){
            if(m[i]<k)continue;
            int sfrg=1;
            int sm=0;
            for(int j=0;j<k;j++){
                if(sfrg==0)break;
                for(int a=0;a<m[i];a++){
                    if(p[i][a]==l[j]){
                        sm++;
                        break;
                    }
                    else if(p[i][a]>l[j]){
                        sfrg=0;
                        break;
                    }
                }
                if(sm==k){
                    if(frg==0)frg=i+1;
                    else frg=-1;
                }
            }
        }

        if(frg>0)cout << frg << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
