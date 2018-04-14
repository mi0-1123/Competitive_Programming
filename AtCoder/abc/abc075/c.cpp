#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m,0),b(m,0);
    int ans=m;
    for(int i=0;i<m;i++)cin >> a[i] >> b[i];
    for(int i=0;i<n;i++){
        int s=0,t=0;
        for(int j=0;j<m;j++){
            if(a[j]==i+1)s=b[j];
            else if(b[j]==i+1)s=a[j];
            else continue;
            for(int k=j+1;k<m;k++){
                if(a[k]==i+1)t=b[k];
                else if(b[k]==i+1)t=a[k];
                else continue;
                for(int l=0;l<m;l++){
                    if(a[l]==min(s,t) && b[l]==max(s,t))ans--;
                }
            }
        }
    }
    cout << ans << endl;
}
