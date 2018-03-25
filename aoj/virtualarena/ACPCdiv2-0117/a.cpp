#include <iostream>
using namespace std;

int ma[9][9];

bool ch(int y,int x){
    int n=ma[y][x];
    if( y<7 && x<8){
        if(n==ma[y+2][x+1] && y<7 && x<8){
            return false;
        }
    }
    if(y<8 && x<7){
        if(n==ma[y+1][x+2] && y<8 && x<7){
            return false;
        }
    }
    if(y>0 && x<7){
        if(n==ma[y-1][x+2] && y>0 && x<7){
            return false;
        }
    }
    if(y>=2 && x<8){
        if(n==ma[y-2][x+1] && y>=2 && x<8){
            return false;
        }
    }
    if( y>=2 && x>=1){
        if(n==ma[y-2][x-1] && y>=2 && x>=1){
            return false;
        }
    }
    if( y>=1 && x>=1){
        if(n==ma[y-1][x-1] && y>=1 && x>=1){
            return false;
        }
    }
    if( y<8 && x>=2){
        if(n==ma[y+1][x-2] && y<8 && x>=2){
            return false;
        }
    }
    if( y<7 && x>=1){
        if(n==ma[y+2][x-1] && y<7 && x>=1){
            return false;
        }
    }
    return true;
}

int main(){
    int flg=true;
    for(int i=0;i<9;i++){
        int chn[9]={};
        for(int j=0;j<9;j++){
            cin >> ma[i][j];
            if(chn[ma[i][j]-1]==0)chn[ma[i][j]-1]=1;
            else {
                flg=false;
                break;
            }
        }
        if(!flg)break;
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(!ch(i,j)){
                flg=false;
                break;
            }
        }
        if(!flg)break;
    }

    if(flg) cout << "Yes" << endl;
    else cout << "No" << endl;
}
