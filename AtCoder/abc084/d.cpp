#include <iostream>
#include <vector>
using namespace std;

#define N 100000

vector<bool> n(N+1,true);

void is_prime(){
    n[0]=false;
    n[1]=false;
    for(int i=2;i*i<=N;i++){
        if(n[i]==false)continue;
        for(int j=i+i;j<=N;j+=i){
            n[j]=false;
        }
    }
}

int main(){


    is_prime();
    vector<int> num(N+1,0);
    //for(int i=0;i<10;i++)cout << i << ":"<< n[i] << endl;

    int sum = 0;
    for(int i=2;i<N;i++){
        if(n[i] && n[(i+1)/2])sum++;
        num[i]=sum;
    }

    //for(int i=0;i<10;i++)cout << i << ":"<< num[i] << endl;
    int q;
    cin >> q;
    int l,r;
    //int sum;
    for(int i=0;i<q;i++){
        cin >> l >> r;
        if(n[l] && n[(l+1)/2])cout << num[r]-num[l]+1 << endl;
        else cout << num[r]-num[l] << endl;
    }
}
