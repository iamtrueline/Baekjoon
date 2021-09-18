#include <stdio.h>

int main () {
    int n, i;
    double all = 0, max = 0;
    double score[1000];
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%lf", &score[i]);
        if(max < score[i]){
            max = score[i];
        }
    }
    
    for(i = 0; i < n; i++){
        all += score[i]/max*100;
    }

    printf("%lf", all/(double)n);
    return 0;
}
