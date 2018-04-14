#include <bits/stdc++.h>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()

Int f[101][2][5];
Int p[101][11];

int main(){
    int n;
    cin >> n;

    REP(i,n){
        REP(j,2){
            REP(k,5){
                cin >> f[i][j][k];
            }
        }
    }

    REP(i,n){
        REP(j,11){
            cin >> p[i][j];
        }
    }

    REP(i,n){
        REP(i0,10){
            REP(i1,10){
                REP(i2,10){
                    REP(i3,10){
                        REP(i4,10){
                            REP(i5,10){
                                REP(i6,10){
                                    REP(i7,10){
                                        REP(i8,10){
                                            REP(i9,10){

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
