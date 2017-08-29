#include <stdio.h>
#include <string.h>

int main(){

  char str[200];
  int len;

  scanf("%s",str);
  len=strlen(str);
  printf("%c%d%c",str[0],len-2,str[len-1]);

  return 0;

}
