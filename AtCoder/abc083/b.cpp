#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    //to_string(n);

    int sum,res=0;
    for(int i=0;i<=n;i++){
        int s=i;
        string str;
        str = to_string(s);
        sum=0;
        for(int j=0;j<str.size();j++)sum+=str[j]-'0';
        if(sum>=a && sum<=b)res+=i;
    }
    cout << res << endl;
}
