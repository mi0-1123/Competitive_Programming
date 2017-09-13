#include<stdio.h>
#include<string.h>

int main(){
  char a[20];
  while(scanf("%s",a)!=EOF){
    int i,j;
    for(i=0;i<20;i++){
      if(a[i]==0)continue;
      for(j=i+1;j<20;j++){
	if(a[j]==0)continue;
	if(a[i]+1==a[j] || a[i]-1==a[j]){
	  a[i]=0;
	  a[j]=0;
	  i=-1;
	  break;
	}else{
	  break;
	}
      }
    }

    for(i=0;i<20;i++){
      if(a[i]==0)continue;
      else printf("%c",a[i]);
    }

    printf("\n");

  }

  return 0;

}
