#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> h(5,0),frg(5,0);

    while(1){
        cin >> h[0];
        if(h[0]==0)break;
        for(int i=1;i<5;i++)cin >> h[i];
        for(int i=0;i<5;i++)frg[h[i]-1]++;

        if(frg[0]*frg[1]*frg[2]!=0 || frg[0]==5 || frg[1]==5 || frg[2]==5){
            for(int i=0;i<5;i++)cout << "3" << endl;
        }else if(frg[0]>0){
            if(frg[1]>0){
                for(int i=0;i<5;i++){
                    if(h[i]==1)cout << "1" << endl;
                    else cout << "2" << endl;
                }
            }else{
                for(int i=0;i<5;i++){
                    if(h[i]==3)cout << "1" <<endl;
                    else cout << "2" << endl;
                }
            }
        }else{
            for(int i=0;i<5;i++){
                if(h[i]==2)cout << "1" << endl;
                else cout << "2" << endl;
            }
        }

        for(int i=0;i<5;i++){
            frg[i]=0;
            h[i]=0;
        }
    }


    return 0;


}
