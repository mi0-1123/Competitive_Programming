#include <stdio.h>
#include <string.h>

int main(){
  
  int asc,f,b,i,len,count;
  char arr[32];
  
  while(1){

    scanf("%s",arr);
    asc = arr[0];
    if(asc == 35) break;
    //    printf("%d\n",asc);    
    f=0;
    b=0;
    count=0;
    len = strlen(arr);
    
    for(i=0;i<len;i++){
      
      if((arr[i]<='p' && arr[i]>='h') || arr[i]=='u' || arr[i]=='y'){
	
	f=1;
	
      }else{
	
	f=2;
	
      }
      //      printf("%d\n",f);
      
      if(f != b && b != 0) count++;
      
      b = f;
      
    }

    printf("%d\n",count);
    
  }
  
  
  return 0;
  
}
