#include <iostream>
using namespace std;

int main(){
    int n;
    std::cin>>n;
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            std::cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            std::cout<<"*";
        }
            std::cout<<'\n';
    }
    return 0;
}
