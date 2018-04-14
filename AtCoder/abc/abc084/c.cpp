#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n-1),s(n-1),f(n-1),sum(n-1,0);
    for(int i=0;i<n-1;i++){
        cin >> c[i] >> s[i] >> f[i];
        sum[i]+=c[i]+s[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(sum[i]<s[j])sum[i]=s[j];
            else if(sum[i]%f[j])sum[i]+=f[j]-(sum[i]%f[j]);
            sum[i]+=c[j];
        }
    }
    
    for(int i=0;i<n-1;i++)cout << sum[i] << endl;
    cout << 0 << endl;

}
