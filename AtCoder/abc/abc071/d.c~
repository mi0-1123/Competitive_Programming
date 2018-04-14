#include <stdio.h>
#include <string.h>

#define N 1000000007

int main(){
  int n,i,sn[60]={1};
  char s1[60],s2[60];

  scanf("%d",&n);
  scanf("%s",s1);
  scanf("%s",s2);
  // printf("\n%s\n",s1);
  int loc=0;
  for(i=1;i<n;i++){
    if(s1[i-1]==s1[i])sn[loc++]=2;
    else sn[loc++]=1;
  }

  int f=sn[0];
  long long int sum=sn[0];
  
  for(i=1;i<loc;i++){
    if(f==1)sum*=2;
    else{
      if(sn[i]==1)sum*=1;
      else sum*=3;
    }
    sum%=N;
  }

  printf("%lld\n",sum*3);

  return 0;

}
