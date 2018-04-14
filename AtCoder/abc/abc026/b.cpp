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

#define PI 3.14159265359

int main(){
    int n;
    cin >> n;
    vector<int> r(n);
    REP(i,n){
        cin >> r[i];
    }
    sort(All(r));
    reverse(All(r));

    int sum=0;
    REP(i,n){
        if(i%2)sum+=pow(r[i-1],2.0)-pow(r[i],2.0);
    }
    if(n%2)sum+=pow(r[n-1],2.0);


    printf("%F\n",sum*PI);
  //  cout << sum << " " << endl;
//    cout << sum*PI << endl; 


}
