#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int n;
    cin >> n;
    int frg=0;
    int s,f;
    for(int i=0;i<n;i++){
        cin >> s >> f;
        if((s<a&&a<f)||(s<b&&b<f)){
            frg=1;
            break;
        }else if(a<=s && f<=b){
            frg=1;
            break;
        }
    }
    cout << frg << endl;
    return 0;
}
