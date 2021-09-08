#include <iostream>
using namespace std;

int main(){
    int n, num, min = 1000001, max = -1000001;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        if(num>max)
            max = num;
        if(num<min)
            min = num;
    }
    cout << min << " " << max;
    return 0;
}
