#include <stdio.h>

int main() {
    int num[42] = {0, }, i, a, temp, rlt = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &a);
        temp = a%42;
        num[temp]++;
    }
    for(i = 0;i < 42; i++){
        if(num[i] != 0)
            rlt++;
    }
    printf("%d", rlt);
    return 0;
}
