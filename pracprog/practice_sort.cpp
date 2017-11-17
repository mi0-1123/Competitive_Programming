#include <iostream>
#include <algorithm>
using namespace std;

    
struct Card{
    int num;    
    char ch;

    Card(int a,int b){
        num=a;
        ch=b;
    }
    bool operator < (const Card &card) const {
        if(num < card.num)return true;
        else return false;
    }
};

int main(){

    Card array[3] = { Card(10,'X') , Card(5,'A') , Card(7,'Z') };

    for(int i=0;i<3;i++){
        Card c=array[i];

        cout << c.num << ' ' << c.ch << endl;
    }


    sort(array, array+3); //0(nlogn)でそーと

    reverse(array, array+3); //0(nlogn)でそーと
    
    for(int i=0;i<3;i++){
        Card c=array[i];
        cout << c.num << " " << c.ch  << endl;
    }
    return 0;
}
