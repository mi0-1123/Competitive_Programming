#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int s;
    cin >> s;
    int cou=0;
    //string hoge=s;

    int fs,bs;

    fs = bs = s;
    for(int i=0;i<s;i++){
        string fst=to_string(fs);
        //int bst=bs;
        string bst=to_string(bs);
        string hoge=fst;
        string huga=bst;
        reverse(hoge.begin(),hoge.end());
        reverse(huga.begin(),huga.end());
        if(hoge==fst){
            cout << fs << endl;
            break;
        }else if(huga==bst){
            cout << bs << endl;
            break;
        }
        fs--;
        bs++;
    }

}
