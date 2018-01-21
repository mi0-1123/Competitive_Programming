#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdio>
#include <map>
#include <cstdlib>
using namespace std;

#define Int long long int
#define REP(i,n) for(int i=0;i<n;i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl

int main(){
    int n,k;
    cin >> n >> k;
    int kk = 2*k;
//    fprintf(stderr,"check1\n");
    //Int Bbox[1000][1000],Wbox[1000][1000];
    vector<vector<int> > Bbox(kk,vector<int>(kk,0)),Wbox(kk,vector<int>(kk,0));
    Int x,y;
    char c;
  //  fprintf(stderr,"check2\n");
    vector<vector<int> > sum(k,vector<int>(k,0));

    REP(i,n){
        cin >> x >> y >> c;
        if(c=='B'){
            REP(j,k){
                REP(l,k){

                }
            }
            Bbox[y%kk][x%kk]++;
        }else{
            Wbox[y%kk][x%kk]++;
        }
    }
    //fprintf(stderr,"check3\n");

    vector<vector<int> > sumb(k,vector<int>(k,0)),sumw(k,vector<int>(k,0));
    //sumb = sumw = 0;

    REP(a,k){
        REP(b,k){
            for(int i=a;i<kk;i++){
                for(int j=b;j<kk;j++){
                    if((i<k&&j<k) || (i>=k&&j>=k)){
                        sumb+=Bbox[i][j];
                        sumw+=Wbox[i][j];
                    }else{
                        sumb+=Wbox[i][j];
                        sumw+=Bbox[i][j];
                    }
                }
            }
        }
    }
   // fprintf(stderr,"check4\n");

    cout << sumb <<" "<< sumw << endl;
    cout << max(sumb,sumw) << endl;
}
