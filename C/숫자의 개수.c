#include <stdio.h>

int main() {
    int num[10] = {0, };
    int a, b, c, i;
    
    scanf("%d %d %d", &a, &b, &c);
    i = a*b*c;
    
    while(i>0){
        num[i%10]++;
        i /= 10;
    }
    
    for(i = 0; i<10;i++){
        printf("%d\n", num[i]);
    }
    return 0;
}
