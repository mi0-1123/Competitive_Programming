#include<stdio.h>

int main(){
  int n,a[200];
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int j,r=0;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]+a[j]==256){
	r=1;
	break;
      }
    }
    if(r>0)break;
  }


  if(r==1)printf("yes\n");
  else printf("no\n");

  return 0;

}
