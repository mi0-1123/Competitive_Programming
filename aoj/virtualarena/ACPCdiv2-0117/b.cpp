#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    string in = "indeednow";
    int ind[26]={};

    for(int i=0;i<in.size();i++){
        ind[in[i]-'a']++;
    }

    int flg=true;
    for(int i=0;i<n;i++){
        flg=true;
        int st[26]={};
        cin >> s;
        for(int j=0;j<s.size();j++){
            st[s[j]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(ind[j]!=st[j])flg=false;
        }
        if(flg)cout << "YES" << endl;
        else cout << "NO" << endl;
    }


}
