#include <stdio.h>

int main(){

  int h,w,n,a[20000],c[200][200];

  scanf("%d%d",&h,&w);
  scanf("%d",&n);
  int i,j;
  for(i=0;i<n;i++)scanf("%d",&a[i]);

  int k=0,cou=0;
  
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(cou==0){
	c[i][j]=k+1;
	a[k]--;
	if(a[k]==0)k++;
      }else{
	c[i][w-1-j]=k+1;
	a[k]--;
	if(a[k]==0)k++;
      }
    }
    if(cou>0)cou=0;
    else cou=1;
  }


  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(j!=w-1)printf("%d ",c[i][j]);
      else printf("%d\n",c[i][j]);
    }
  }

  return 0;
}
