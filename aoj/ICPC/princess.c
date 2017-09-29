#include <stdio.h>
int main(){
  
  int i,n,m,p,num[100],mon,sum;
  
  while(scanf("%d%d%d",&n,&m,&p),n){
    sum=0;   
    
    for(i=0;i<n;i++){
      scanf("%d",&num[i]);
      sum+=num[i];
    }
    
    if(num[m-1]==0)printf("0\n");
    else{
      
      mon = (double)(sum*100*(100-p)/100)/num[m-1];
      
      printf("%d\n",mon);
      
    }
  }
  
  return 0;
  
}
