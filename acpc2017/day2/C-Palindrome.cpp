#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    vector<string> in(n);
    for(int i=0;i<n;i++)cin >> in[i];

    string ans="";
    vector<int> frg(n);

    sort(in.begin(),in.end());
    for(int i=0;i<n;i++){
       if(frg[i]==1)continue;
        for(int j=i+1;j<n;j++){
            if(frg[j]==1)continue;

            string tmp=in[j];
            reverse(tmp.begin(),tmp.end());
            if(in[i]==tmp){
                ans+=in[i];
                frg[i]=frg[j]=1;
                break;
            }
        }
    }

    string a="";
    for(int i=0;i<n;i++){
        if(frg[i]==1)continue;
        string tmp=in[i];
        reverse(tmp.begin(),tmp.end());
        if(tmp==in[i]){
            a=in[i];
            break;
        }
    }
    string ansb = ans;
    reverse(ansb.begin(),ansb.end());

    ans += a;
    ans += ansb;
    cout << ans << endl;

    return 0;
}
