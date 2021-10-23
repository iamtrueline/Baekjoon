#include <stdio.h>
#include <string.h>

int main() {
    int i, arr[26];
    char word[100];
    
    for(i = 0; i < 26; i++){
        arr[i] = -1;
    }
    
    scanf("%s", word);
    
    for(i = 0; i < strlen(word); i++){
        if(arr[word[i]-'a'] == -1){
            arr[word[i]-'a'] = i;
        }  
    }
    
    for(i = 0; i < 26; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
