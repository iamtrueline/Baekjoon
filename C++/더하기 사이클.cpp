#include <iostream>
using namespace std;

int main() {
    int ogn, chg, a, b, c, cycle = 0;
    cin >> ogn;
    int tmp = ogn;

    while (1) {
        a = tmp/10, b = tmp%10, c = a + b;
        chg = b * 10 + c % 10;
        cycle++;
        if (ogn == chg) {
            break;
        }
        else {
            tmp = chg;
        }
    }
    cout << cycle;
    return 0;
}
