
#include <stdio.h>
int main(){

  int n,b,f,r,v,i,j,room[15][10]={{0}};

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d%d%d",&b,&f,&r,&v);
    
    room[4*b+f-5][r-1]+=v;

  }

  for(i=0;i<15;i++){
    for(j=0;j<10;j++){
      if(i==3 || i==7 || i==11 )printf("##");
      else printf(" %d",room[i][j]);
    }
    printf("\n");
  }
  return 0;
}
