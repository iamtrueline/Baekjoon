#include <iostream>
using namespace std;

int main() {
    int tmp, big = 0, idx = 0;
    for (int i=0; i<9; i++) {
        cin >> tmp;
        if (big < tmp) {
            big = tmp;
            idx = i+1;
        }
    }
    cout << big << endl << idx;
    return 0;
}
