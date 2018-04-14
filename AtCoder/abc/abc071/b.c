#include <stdio.h>
#include <string.h>

int main(){

  char str[100000];
  int al[26]={};
  scanf("%s",str);
  int i;
  for(i=0;i<=strlen(str);i++){
    int a=str[i];
    al[a-97]=3;
  }

  for(i=0;i<26;i++){
    if(al[i]==0){
      printf("%c\n",i+97);
      break;
    }
    else if(i==25)printf("None\n");
  }

  return 0;

}
