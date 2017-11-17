#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++)cin >> a[i];
    for(int i=0;i<n;i++)cin >> b[i];

    //for(int i=0;i<n;i++)cout  << a[i] << " " << b[i]  << " " << a[i]*b[i]<< endl;

    int ma=0;
    if(k==3){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                //if(i==j)continue;
                for(int l=j+1;l<n;l++){
                    //cout << i << " " << j << " " << l << endl;
                    //cout << a[i]*b[i] <<" "<< a[j]*b[j] <<" " << a[l]*b[l] << endl;
                    //if(l==i ||l==j )continue;
                    int sum=a[i]*b[i]+a[j]*b[j]+a[l]*b[l];
                    //cout << sum << endl;
                    if(b[i]+b[j]+b[l]>m){
                        if()
                        sum-=((b[i]+b[l]+b[j])-m)*min(a[i],min(a[j],a[l]));
                    }else sum+=m-(b[i]+b[j]+b[l]);
                    if(sum>ma){
                       // cout << min(a[i],min(a[j],a[l])) << endl;
                        ma=sum;
                        //cout << i << " " << j <<" " << l << endl;
                    }
                }
            }
        }
    }else if(k==2){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=a[i]*b[i]+a[j]*b[j];
                if(b[i]+b[j]>m)sum-=(m-(b[i]+b[j]))*min(a[i],a[j]);
                else sum+=m-(b[i]+b[j]);
                if(sum>ma)ma=sum;
            }
        }
    }else{
        for(int i=0;i<n;i++){
            int sum=a[i]*b[i];
            if(b[i]>m)sum-=(m-b[i])*a[i];
            else sum+=m-b[i];
            if(ma<sum)ma=sum;
        }
    }

    cout << ma << endl;

}
