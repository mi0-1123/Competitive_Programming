#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n,n){
      int w,h;
      cin >> w >> h;
      vector<vector<int> > mat(300,vector<int>(300,0));
      for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        mat[y-1][x-1]=1;
      }
      int s,t;
      cin >> s >> t;
      int cou=0,ma=0;
      for(int i=0;i<h;i++){
          for(int j=0;j<w;j++){
              for(int k=0;k<t&&k+i<h;k++){
                  for(int l=0;l<s&&l+j<w;l++){
                      cou+=mat[k+i][l+j];
                  }
              }
              ma=max(ma,cou);
              cou=0;
          }
      }
      cout << ma << endl;
    }
}
