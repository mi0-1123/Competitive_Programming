#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int load(int );

int main(){
  int c[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> c[i][j];
    }
  }
  int min=500,sum;
  int loc=load();

  
