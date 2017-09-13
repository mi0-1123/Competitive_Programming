#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  int mat[100][100]={{}},vec[100]={};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> mat[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cin >> vec[i];
  }
  for(int i=0;i<n;i++){
    int x=0;
    for(int j=0;j<m;j++){
      x+=vec[j]*mat[i][j];
    }
    cout << x << endl;
  }
  return 0;
}
