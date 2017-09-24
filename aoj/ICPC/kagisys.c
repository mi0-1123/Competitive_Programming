#include <stdio.h>
#include <string.h>

int main(){

  int i,j,m,n;
  char regi[256][10],try_id[256][10];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",regi[i]);
  }
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",try_id[i]);
  }

  int door=0;

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(strcmp(try_id[i],regi[j])==0){
	if(door==0){
	  printf("Opend by %s\n",try_id[i]);
	  door=1;
	  break;
	}else{
	  printf("Closed by %s\n",try_id[i]);
	  door=0;
	  break;
	}
      }
      if(j==n-1)printf("Unknown %s\n",try_id[i]);
    }
  }


  return 0;
}
