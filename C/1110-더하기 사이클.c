#include <stdio.h>

int main() {
    int ogn, chg, tmp, a, b, c, cycle = 0;
    scanf("%d", &ogn);
    tmp = ogn;
    
    while(1) {
        a = tmp/10;
        b = tmp%10;
        c = a + b;
        chg = b * 10 + c % 10;
        cycle++;
        if(ogn == chg)
            break;
        else
            tmp = chg;
    }
    
        printf("%d", cycle);
        return 0;
}
