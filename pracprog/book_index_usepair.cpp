#include <iostream>
#include<algorithm>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, vector<int> > mp;

    int cou=0,page;
    char name;
    while(cin >> name >> page){
        mp[name].push_back(page);
    }

    for( auto p:mp ){
        string book=p.first;
        vector<int> v=p.second;
        sort(v.begin(),v.end());

        cout << book << endl;

        for(int i=0;i<v.size();i++){
            if(i>0)cout <<' ';
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}
