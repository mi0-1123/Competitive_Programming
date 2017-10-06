#include <cstdio>
#include <iostream>

int main(){

  int n,x,y,stone[20][20]={0},m,l,locx,locy;
  char d;

  while(1){

    std::cin>>n;

    if(n==0)break;

    for(int i=0;i<n;i++){

      std::cin>>
