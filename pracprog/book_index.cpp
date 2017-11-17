#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Book{
    string str;
    int num;

    Book(string s,int n){
        str = s;
        num = n;
    }

    Book(){
        str ="";
        num = 0;
    }

    bool operator < (const Book &book) const{
       if(str == book.str){
           if(num < book.num)return true;
           else return false;
       }else{
           if(str < book.str)return true;
           else return false;
       }
    }
};


int main(){


    Book array[10000];

    int cou=0;
    string name;
    int page;

      while(cin >> name >> page){
        array[cou++]=Book(name, page);
    }

    sort(array,array+cou);

    string key="";

    for(int i=0;i<cou;i++){
        Book c = array[i];
        if(key!=c.str){
            key=c.str;
            if(i>0)cout << endl;
            cout << key << endl;
            cout << c.num;
        }else{
            cout << ' ' << c.num;
        }
    }

    cout << endl;
    
}
