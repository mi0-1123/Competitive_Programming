#include<iostream>

int main(){
    int m,d;
    std::cin >> m >> d;
    if(m%d>0)std::cout << "NO" << std::endl;
    else std::cout << "YES" << std::endl;
}
