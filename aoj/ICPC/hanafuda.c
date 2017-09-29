#include<stdio.h>

int main(){

  int i,j,card[50],x[50],n,r,p,c;

  while(scanf("%d%d",&n,&r),n){

    for(i=1;i<=n;i++){
      card[i] = n - i + 1;
    }



    for(i=0;i<r;i++){

      scanf("%d%d",&p,&c);
      
      for(j=0;j<c;j++){
	x[j] = card[p+j];
      }

      for(j=0;j<p-1;j++){
	card[p+(c-1)-j] = card[p-1-j];
      }

      for(j=0;j<c;j++){
	card[j+1] = x[j];
      }

    }

    printf("%d\n",card[1]);
  }

  return 0;

}
