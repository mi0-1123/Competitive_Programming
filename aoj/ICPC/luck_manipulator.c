#include <stdio.h>
int main(){
  int n,a,b,c,x,y[10000];
  while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x),n){
    int i,count=0;
    for(i=0;i<n;i++)scanf("%d",&y[i]);
    for(i=0;i<=10000;i++){
      if(y[count]==x)count++;
      x=(a*x+b)%c;
      if(count==n){
	printf("%d\n",i);
	break;
      }
      if(i==10000)printf("-1\n");
    }
  }
  return 0;
}
