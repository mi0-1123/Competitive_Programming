#include <iostream>

using namespace std;

int main(){

  int k,i,j,n,l[100];

    cin >> n >> k;
    for(i=0;i<n;i++)cin >> l[i];
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(l[j]<l[j+1]) swap(l[j],l[j+1]);
        }
    }

    //for(int i=0;i<n;i++)cout << l[i] << endl;
    
    int sum=0;
   // cout << sum << endl;
    for(i=0;i<k;i++)sum+=l[i];

    cout << sum << endl;

return 0;
}
