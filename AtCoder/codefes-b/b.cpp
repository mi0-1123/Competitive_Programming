#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector<long long> d(n,0);
    for(int i=0;i<n;i++)cin >> d[i];
    cin >> m;
    vector<long long> t(m,0);
    for(int i=0;i<m;i++)cin >> t[i];
    sort(d.begin(),d.end());
    sort(t.begin(),t.end());
    int frg=1,st=0;
    for(int i=0;i<m;i++){
        for(int j=st;j<n;j++){
            if(t[i]==d[j]){
                st=j+1;
                break;
            }else if(t[i]<d[j]){
                frg=0;
                break;
            }else if(m-i>n-j){
                frg=0;
                break;
            }
        }
        if(!frg)break;
    }
    if(frg)cout << "YES" << endl;
    else cout << "NO" << endl;
}
