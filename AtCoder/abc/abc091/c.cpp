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

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > red(n),blue(n);
    REP(i,n){
        int x,y;
        cin >> x >> y;
        red[i].first=x;
        red[i].second=y;
    }
    REP(i,n){
        int x,y;
        cin >> x >> y;
        blue[i].first=x;
        blue[i].second=y;
    }
    sort(All(red));
    sort(All(blue));

    vector<int> fr(n,0);
    int may,mi;
    REP(i,n){
        mi=-1;
        may=-1;
        int bx=blue[i].first;
        int by=blue[i].second;
        REP(j,n){
            int rx=red[j].first;
            int ry=red[j].second;
            if(bx>rx&&by>ry&&fr[j]==0){
                if(may<ry){
                    may=ry;
                    mi=j;
                }
            }
        }
        if(mi>=0){
            fr[mi]=1;
            //cout << red[mi].fr << red[mi].sc << " " <<bx<<by <<endl;
        }
    }

    //REP(i,n)cout << fr[i] << endl;
    int res=0;
    REP(i,n)res+=fr[i];
    cout << res << endl;
}
