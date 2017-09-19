#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> day(361, 0);
    vector<int> m(n),d(n),v(n),s(n),st(n);
    //vector<int> frg(361,0);
    for(int i=0;i<n;i++){
        cin >> m[i] >> d[i] >> v[i] >> s[i];
        st[i]=(m[i]-1)*30+d[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i];j++){
            day[st[i]+j] = s[i];
        }
    }

    for(int i=1;i<=360;i++){
        if(day[i]>0)continue;
        for(int j=0;j<n;j++){
            int crowd;
            if(min(i-(st[j]+v[j]-1)+1,st[j]-i+1)<0){
                crowd=max(0,s[j]-(min(i-(st[j]+v[j]-1)+1,st[j]-i+1)+360));
            }else{
                crowd=max(0,s[j]-(min(i-(st[j]+v[j]-1)+1,st[j]-i+1)));
            }
            day[i]=max(crowd,day[i]);
        }
    }

    sort(day.begin(),day.end());
    //cout << day[0] << endl;
    //for(int i=0;i<360;i++)cout<<day[i]<<endl;;
    cout << day[1] << endl;
    //cout << day[361] << endl;
   // cout << day[360] << endl;
    return 0;

}

//http://judge.u-aizu.ac.jp/onlinejudge/cdescription.jsp?cid=ACPC2017Day2&pid=B
