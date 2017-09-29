#include <stdio.h>

int main (){
  
  int i,j,n,sum,res;
  
  while(scanf("%d",&n),n){
   
    sum = 0;

    for(i=1; i<n; i++){

      res = 0;

      for(j=i;;j++){
	
	res += j;
	
	if(res == n){
	  //  printf("%d\n",j);	  
	  sum++;
	  break;
	  
	}else if(res > n){
	  
	  break;
	  
	}
      }
    }
    
    printf("%d\n",sum);
    
  }

  return 0;
  
}

