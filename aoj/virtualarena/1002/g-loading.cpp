#include<iostream>
using namespace std;

int bo[50000][4]={{}};
int fcou=0,bcou=0;

void fch(int a,int b){
    if(bo[a+1][b]==0 && bo[a][b+1]==0 && bo[a+1][b+1]==0){
        bo[a][b]=1;
        bo[a+1][b]=1;
        bo[a][b+1]=1;
        bo[a+1][b+1]=1;
       // cout << a << " " << b << endl;
        fcou++;
    }
}

void bch(int a, int b){
    if(bo[a-1][b]==0 && bo[a][b-1]==0 && bo[a-1][b-1]==0){
        bo[a][b]=1;
        bo[a-1][b]=1;
        bo[a][b-1]=1;
        bo[a-1][b-1]=1;
        bcou++;
      //  cout << a << " " << b << endl;
    }
}

int main(){
    int h,n;
    cin >> h >> n;
    int x[50000],y[4];
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
        bo[y[i]][x[i]]=1;
    }

    for(int i=0;i<h-1;i++){
        for(int j=0;j<3;j++){
            if(bo[i][j]==0){
                fch(i,j);
            }
        }
    }

    for(int i=0;i<h;i++){
        for(int j=0;j<4;j++){
            bo[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)bo[y[i]][x[i]]=1;

    for(int i=h-1;i>0;i--){
        for(int j=3;j>0;j--){
            if(bo[i][j]==0){
                bch(i,j);
            }
        }
    }

 //   cout << fcou << " " << bcou << endl;

    if(fcou>bcou)cout << fcou << endl;
    else cout << bcou << endl;

    return 0;

}
