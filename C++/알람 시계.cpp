#include <iostream>

int main(){
    int h, m;
    std::cin>>h>>m;
    if(m >= 45){
        m -= 45;
        std::cout<<h<<' '<<m;
    }
    else{
        m += 15;
        if(h == 0)
            h = 23;
        else
            h -= 1;
        std::cout<<h<<' '<<m;
    }
    return 0;
}
