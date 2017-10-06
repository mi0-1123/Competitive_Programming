#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    string hoge=s;
    reverse(hoge.begin(),hoge.end());
    //cout << hoge << endl;
    int n=s.size();
    string ans="";
    for(int i=0;i<n/2;i++){
        if(s[i]==hoge[i])ans+=s[i];
        else ans+=min(s[i],hoge[i]);
    }
    string rans=ans;
    for(int i=0;i<n/2;i++)cout << ans[i];
    if(n%2>0)cout << s[n/2];
    //cout << ans << endl;
    reverse(rans.begin(),rans.end());
    //cout << rans << endl;
    for(int i=0;i<n/2;i++)cout << rans[i];

   // cout << ans.size() << endl;
    cout << endl;
    return 0;
}
