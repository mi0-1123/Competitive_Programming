#include <stdio.h>

int main(){

  int n,a[100000];

  scanf("%d",&n);

  int i;
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  int loc=0,cou=1;
  
  while(1){
    if(a[loc]==2)break;
    loc=a[loc];
    ++cou;
    if(cou>n){
      cou=-1;
      break;
    }
  }
  
  printf("%d\n",cou);
  
  return 0;

}
