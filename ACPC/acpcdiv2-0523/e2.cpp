#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    int d;
    cin >> d;
    int n;
    REP(k,d){
        cin >> n;
        int box[n][n]={};
        for(int i=0;i<n/2+1;i+=2){

            for(int y=i;y<n-i;y++){
                for(int x=i;x<n-i;x++){
                    if(y==i||y==n-i-1||x==i||x==n-i-1)box[y][x]=1;
                }
            }
        }
        for(int i=0;i<n/2;i+=2){
            if(box[n-1-i][i+1]){
                if(box[n-2-i][i+2]==0){
                    if(box[n-3-i][i+2]){
                        swap(box[n-1-i][i+1],box[n-2-i][i+2]);
                    }else{
                        box[n-1-i][i+1]=box[n-2-i][i+2];
                    }
                }else{
                    box[n-1-i][i+1]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(box[i][j])cout <<"#";
                else cout << " ";
            }
            cout << endl;
        }
        if(k!=d-1)cout << endl;
    }
}
