#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<tuple<int,int,int> > time(n);

    for(int i=0;i<n;i++){
        cin >> get<0>(time[i]) >> get<1>(time[i]);
        get<2>(time[i])=i;
    }
    
    sort(time.begin(),time.end());

    //i番目のひとがなんたらでsortしちゃダメだったむり

    for(int i=0;i<n:i++){
        
    }
}
