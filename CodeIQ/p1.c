#include<stdio.h>

int main(){

  int i,n,a[4],min,max;
  while(scanf("%d",&n)!=EOF){
    //    if(n!=EOF)break;

    a[0]=n/1000;
    a[1]=(n-a[0]*1000)/100;
    a[2]=(n%100)/10;
    a[3]=n%10;

    min = 100;
    max = 0;

    for(i=0;i<4;i++){
      if(min > a[i] && a[i]!=0){
	min = a[i];
      }else if(max < a[i]){
	max = a[i];
      }
    }

    if(a[0]>0 && a[1]>0 && a[2]>0 && a[3]>0){
      printf("%d\n",max);
    }else{
      printf("%d\n",min);
    }

  }

  return 0;

}
      
