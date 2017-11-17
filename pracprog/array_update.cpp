#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a,d;
    cin >> a >> d;

    int m;
    cin >> m;
    vector<int> an(n);

    for(int i=0;i<n;i++){
       an[i]=a+d*i;
    }


   // for(auto p:an)cout << p <<" ";
    //cout << endl;

    for(int i=0;i<m;i++){
        int x,y,z;
        cin >> x >> y >> z;
        if(x==0){
            swap(an[y-1],an[z-1]);
        }else{
            an[y-1]=an[z-1];
        }
        
    //for(auto p:an)cout << p <<" ";
    //cout << endl;

    }

    //for(auto p:an)cout << p <<" ";
    //cout << endl;

    int k;
    cin >> k;
    cout << an[k-1] << endl;

    return 0;

}
