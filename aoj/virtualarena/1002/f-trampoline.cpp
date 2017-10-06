#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> tra;
    vector<int> bet;
    int cou=0,emp=0;
    int frg=1;
    for(int i=0;i<n;i++){
        int d;
        cin >> d;
        if(d<10&&(i==0||i==n-1)){
            frg=0;
            break;
        }
        if(d<10)emp++;
        else{
            tra[cou]=d;
            bet[cou]=emp*10;
            cou++;
            emp=0;
        }
    }

    int co=1;
    int gofrg=0,bkfrg=0;
    int tmp=0,nex=1;
    for(int i=0;i<cou;i++){
        tmp=tra[i];
        if(co==0)break;
        co=0;
        for(int j=nex;j<cou;j++){
            if(tmp<bet[j]){
                gofrg=0;
                break;
            }else{
                tmp-=bet[j];
                nex=j+1;
                co++;
            }
        }
        if(nex==cou)gofrg=1;
    }

    co=1;
    nex=cou-1;
    for(int i=cou-1;i>=0;i++){
        tmp=tra[i];
        if(co==0)break;
        for(int j=nex;j>=1;j++){
            if(tmp<bet[j]){
                bkfrg=0;
                break;
            }else{
                tmp-=bet[j];
                nex=j-1;
                co++;
            }
        }
        if(nex==0)bkfrg=1;
    }

    if(frg*gofrg*bkfrg==0)cout << "no" << endl;
    else cout << "yes" << endl;

    return 0;

}
