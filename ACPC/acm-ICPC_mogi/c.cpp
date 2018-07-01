#include<bits/stdc++.h>
using namespace std;

string s;

int solve(string nn){
  int i=0;
  string abcd="abcd";
  stack<int> st;
  while(i<s.size()){
    if(s[i]!=']'){
      int a=s[i];
      for(int j=0;j<4;j++)if(abcd[j]==s[i])a=nn[j]-'0';
      st.push(a);
      i++;
    }else{
      int qn=st.top(); st.pop();
      int pn=st.top(); st.pop();
      char op=st.top(); st.pop();
      st.pop();
      int ans;
      if(op=='+'){
	ans=qn|pn;
      }else if(op=='*'){
	ans=qn&pn;
      }else{
	ans=qn^pn;
      }
      st.push(ans);
      i++;
    }
  }
  return st.top();
}

int main(){

  string abcd="abcd";
  string nn;
  while(cin >> s){
    stack<int> st;
    if(s==".")break;
    cin >> nn;
    int res=solve(nn);

    int cou=0;
    for(int i=0;i<10000;i++){
      int num=i;
      string str="";
      for(int j=0;j<4;j++){
	int sub=pow(10,3-j);
	if(num<sub)str+='0';
	else str+=num/sub+'0',num%=sub;
      }
      int ret=solve(str);
      if(ret==res)cou++;
    }
    cout << res << " "<<cou<< endl;
  }
  return 0;
}
