#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,a,d;
    cin >> n >> a >> d;
    vector<int> an(n);
    for(int i=0;i<n;i++)an[i]=a+d*i;

    int m;
    cin >> m;
    int x,y,z;
    int k;
    cin >> k;
    for(int i=0;i<m;i++){
      //  cout << an[0]<<" ";
        cin >> x >> y >> z;
       // cout << x << " " << y << " " << z << endl;
        if(x==0){
            //cout << "1 \n";
            for(int j=y-1;j<z-1;j++)swap(an[j],an[z-1-j]);
           // reverse(an[y-1],an[y-1]+z-y+1);
        }else if(x==1){
            //cout << "2 \n";
            for(int j=y-1;j<z-1;j++)an[j]++;
        }else if(x==2){
            //cout << "3 \n";
            for(int j=y-1;j<z;j++)an[j]/=2;
        }
   //   cout << an[0] <<" "<<an[n-1]<<endl;
    }
    int k;
    cin >> k;
    cout << an[k-1] << endl;

    return 0;
}
