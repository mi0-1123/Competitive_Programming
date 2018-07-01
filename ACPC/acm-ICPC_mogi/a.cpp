#include<iostream>
using namespace std;

int main()
{
  string g;

  while(1){
    cin >> g;
    if(g == "#") break;

    int y, m, d;
    cin >> y >> m >> d;

    bool flag = false;
    
    if(y == 31) {
      if(m > 4) flag = true;
    }

    if(y >= 32) flag = true;

    if(flag){
      cout << '?' << " " << y - 30 << " " << m << " " << d << endl;
    }

    else cout << g << " " << y << " " << m << " " << d << endl;
     
  }


}
