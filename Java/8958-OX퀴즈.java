import java.util.Scanner;

public class Main {
    public static void main(String [] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        
        for(int i = 0; i < n; i++){
            int sum = 0;
            int add = 1;
            String string = sc.next();
            for(int j = 0; j < string.length(); j++){
                if(string.charAt(j)=='O') {
                    sum += add;
                    add++;
                }
                else{
                    add = 1;
                }
            }
            System.out.println(sum);
        }
    }
}
