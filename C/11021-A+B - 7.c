#include <stdio.h>

int main(){
    int n, i, a, b, ans;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &a, &b);
        ans = a + b;
        printf("Case #%d: %d\n", i+1, ans);
    }
    return 0;
}
