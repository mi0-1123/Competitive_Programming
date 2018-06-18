#include <iostream>
using namespace std;


struct Card{
    int num;
    char ch;

    bool operator < (const Card card){
        if(num < card.num)return true;
        else return false;
    }
};

int main(){

    Card array[3] = { (Card){6,'X'} , (Card){5,'A'} , (Card){7,'Z'} };

    for(int i=0;i<3;i++){
        Card c=array[i];

        cout << c.num << ' ' << c.ch << endl;
    }

    if(array[0] < array[1]){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}
