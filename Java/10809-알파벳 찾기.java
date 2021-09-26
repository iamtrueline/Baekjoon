import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[26];
        
        for(int i = 0; i < 26; i++){
            arr[i] = -1;
        }
        
        String word = sc.next();
        
        for(int i = 0; i < word.length(); i++){
            if(arr[word.charAt(i)-'a'] == -1){
                arr[word.charAt(i)-'a'] = i;
            }  
        }
        
        for(int i = 0; i < 26; i++){
            System.out.printf("%d ", arr[i]);
        }
    }
}
