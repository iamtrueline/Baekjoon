#include <iostream>

int main(){
    int n, a, b, ans;
    std::cin>>n;
    for(int i = 0; i < n; i++){
        std::cin>>a>>b;
        ans = a + b;
        std::cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<ans<<std::endl;
    }
    return 0;
}
