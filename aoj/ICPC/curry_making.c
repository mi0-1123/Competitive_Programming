
#include<stdio.h>

int main(){

  int w0,r0,c,r,i;

  while(1){
    scanf("%d%d%d%d",&r0,&w0,&c,&r);
    if(r0==0 && w0==0 && c==0 && r==0)break;

    //    printf("%d %d %d %d\n",r0,w0,c,r);
    //  printf("%f\n",(double)r0/w0);
    if(c <= (double)r0/w0){
      printf("0\n");
    }else{
      //  printf("1\n");  
      for(i=1;i<=100;i++){
	//printf("%d\n",i);
	if( (double)(r0 + r*i)/w0 - c >= 0 ){
	    printf("%d\n",i);
	    break;
	}

      } 
    }


  }


  return 0;

}
