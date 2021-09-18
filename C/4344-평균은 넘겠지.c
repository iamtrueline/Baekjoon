#include <stdio.h>

int main() {
    int n, m, i, j, sum, score[1000];
    float avg;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &m);
        sum = 0;
        for (j = 0; j < m; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (float)sum/(float)m;
        sum = 0;
        for (j = 0; j < m; j++){
            if(avg < score[j]){
                sum++;
            }
        }
        avg = (float)sum/(float)m*100;
        printf("%.3f%%\n", avg);
    }
    return 0;
}
