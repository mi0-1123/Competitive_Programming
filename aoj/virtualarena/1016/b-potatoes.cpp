#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n),b(n),po(n);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<n;i++){
        cin >> b[i];
        ///po[i]=a[i]*b[i];
    }
    int sum=0;
    while(m>0 && k>0){
        int ma=0,tmp;
        for(int i=0;i<n;i++){
            int u;
            if(b[i]<m)u=a[i]*b[i];
            else u=a[i]*k;
            if(ma<u && a[tmp]<a[i]){
                ma=u;
                tmp=i;
            }
        }
        cout << a[tmp] << " ";
        if(m>=b[tmp]){
            sum+=a[tmp]*b[tmp];
            m-=b[tmp];
            a[tmp]=0;
        }else{
            sum+=m*a[tmp];
            m=0;
            a[tmp]=0;
        }
        //cout << m << " ";
        //cout << sum << " ";
     //   po[tmp]=0;
        k--;
    }
    cout << sum << endl;
}
