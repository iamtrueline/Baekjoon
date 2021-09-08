#include <stdio.h>

int main (){
    int min = 1000001, max = -1000001, n, i, num;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &num);
        if(num>max)
            max = num;
        if(num<min)
            min = num;
    }
    printf("%d %d", min, max);
    return 0;
}
