#include <iostream>
using namespace std;

int main() {
    int chess[6]={1,1,2,2,2,8}, now;
    for(int i=0; i<6; i++) {
        cin>>now;
        cout<<chess[i]-now<<' ';
    }
    return 0;
}
