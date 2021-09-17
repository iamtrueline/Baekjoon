#include <iostream>
using namespace std;

int main() {
    int num[42] = {0, }, a, temp, rlt = 0;
    for(int i = 0; i < 10; i++){
        cin>>a;
        temp = a%42;
        num[temp]++;
    }
    for(int i = 0;i < 42; i++){
        if(num[i] != 0)
            rlt++;
    }
    cout<<rlt;
    return 0;
}
