#include <stdio.h>

int count;

void def(int n){
  int i,j,a[4],l,s,k;

  if(n==6174){
    
    printf("%d\n",count);

  }else{

    count++;
    
    a[3]=n/1000;
    a[2]=(n/100)%10;
    a[1]=(n/10)%10;
    a[0]=n%10;

    for(i=0;i<3;i++){
      for(j=0;j<3-i;j++){
	if(a[j]<a[j+1]){
	  k=a[j];
	  a[j]=a[j+1];
	  a[j+1]=k;
	}
      }
    }

    l=a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
    s=a[3]*1000 + a[2]*100 + a[1]*10 + a[0];

    def(l-s);
  }
}

int main(){
  int num,ans;
  while(scanf("%d",&num),num){

    count=0;
    if(num%1111==0){
      printf("NA\n");
    }else{
      def(num);
    }
  }

  return 0;
}
