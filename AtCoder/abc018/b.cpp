#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int l,r;
    for(int i=0;i<n;i++){
        cin >> l >> r;
//       l--;
//       r--;
    //sort(s[l],s[l]+r-l);
       reverse(s.begin()+l-1,s.begin()+r);
    }
    cout << s << endl;
}
