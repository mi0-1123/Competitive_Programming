#include <stdio.h>

int main(){

  int n,x,y,stone[21][21];
  int m,l,i,j,locx,locy,sum;
  char d;

  while(scanf("%d",&n),n){

    for(i=0;i<=20;i++)for(j=0;j<=20;j++)stone[i][j]=0;
    
    for(i=0;i<n;i++){
      scanf("%d%d",&x,&y);
      stone[x][y]=1;
    }

    locx=10;
    locy=10;
    
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%c",&d);

      
      scanf("%c%d",&d,&l);
      //printf("d=%c ,l=%d\n",d,l);
      if(d=='N'){
	for(j=0;j<l;j++){
	  locy++;
	  stone[locx][locy]=0;
	}
      }else if(d=='S'){
	for(j=0;j<l;j++){
	  locy--;
	  stone[locx][locy]=0;
	}
      }else if(d=='E'){
	for(j=0;j<l;j++){
	  locx++;
	  stone[locx][locy]=0;
	}

      }else if(d=='W'){
	for(j=0;j<l;j++){
	  locx--;
	  stone[locx][locy]=0;
	}
      }
    }
    
    sum=0;
    for(i=0;i<=20;i++){
      for(j=0;j<=20;j++){
	sum+=stone[i][j];
      }
    }
    
    if(sum==0)printf("Yes\n");
    else printf("No\n");

  }

  return 0;

}
