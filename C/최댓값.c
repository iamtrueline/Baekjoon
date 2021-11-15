#include <stdio.h>

int main() {
    int i, tmp, big = 0, idx = 0;
    for(i=0; i<9; i++){
        scanf("%d", &tmp);
        if(big < tmp){
            big = tmp;
            idx = i+1;
        }
    }
    printf("%d\n%d", big, idx);
    return 0;
}
