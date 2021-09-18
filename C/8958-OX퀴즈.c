#include<stdio.h>
#include<string.h>

int main(){
    int n, i, j, sum, add;
    char string[80];
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        sum = 0;
        add = 1;
        scanf("%s", string);
        for(j = 0; j < strlen(string); j++){
            if(string[j]=='O'){
                sum += add;
                add++;
            }
            else{
                add = 1;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
