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

int box[101][101];
int n;

void drw(int x,int y,char d){
    box[y][x]=1;
    if(d=='u'){
        if(y==0)drw(x,y,'r');
        else if(y==1)drw(x,y-1,'u')
        else{
            if(box[y-2][x]==1)drw(x,y,'r');
            else drw(x,y-1,'u');
        }
    }else if(d=='d'){
        if(y==n-1)drw(x,y,'l');
        else if(y==n-2)drw(x,y+1,'d');
        else{
            if(box[y+2][x]==1)drw(x,y,'l');
            else dr

        }
    }
}


void res(){
    REP(i,101){
        REP(j,101){
            box[i][j]=0;
        }
    }
}

bool check(int y,int x){
    if(box[y+1][x]==1||box[y-1][x]==1||box[y][x+1]==1|| box[y][x-1]==1){
        return false;
    }else{
        return true;
    }
}

int main(){
    ios::sync_with_stdio(false);
    int d;
    cin >> d;
    int n;
    REP(i,d){
        res();
        cin >> n;
        drw(0,n-1);
        int l=0,r=n-1;
        int u=0,b=n-1;
        REP()
    }
}
