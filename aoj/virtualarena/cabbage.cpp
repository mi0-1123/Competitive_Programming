#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
using namespace std;

int main(){
  int n,m,a,b;
  cin >> n >> m >> a >> b;
  /*vector<int> D(n);
  vector<int > dis(n);
  int sum=0;
  for(int i=0;i<n;i++){
    cin >> D[i];
    if(D[i]>=a){
      sum++;
      dis[sum-1]=D[i];
    }
  */
  int sum=0;
  int d[10000]={},dis[10000]={};
  for(int i=0;i<n;i++){
    cin >> d[i];
    if(d[i]>=a)dis[sum++]=d[i];
    else break;
  }
  //    for(int i=0;i<sum;i++)cout << dis[i] << endl;
    int last=0;

    //if(n-sum<m)last=0;
    //else last=sum;

  //  cout << sum << endl;
    //    cout << b <<endl;
  int loc=0;
  if(n-sum<m){
    //    printf("1\n");
    while(1){
      if(sum==0)break;
      if(dis[sum-1]<=b){
	//	cout << 1 <<endl;
	sum--;
      }else{
	last=sum;
	break;
      }
      //sum--;
    }
    last=sum;
  }else{
    last=0;
  }
  //  cout << sum << endl;
    cout << last << endl;
  
  return 0;
}

