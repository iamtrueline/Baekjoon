#include <iostream>

int main() {
    int num[10] = {0, };
    int a, b, c, i;
    
    std::cin >> a >> b >> c;
    i = a*b*c;
    
    while(i>0){
        num[i%10]++;
        i /= 10;
    }
    
    for(i = 0; i<10;i++){
        std::cout << num[i] << "\n";
    }
    return 0;
}
