import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int sum = 0;

        int n = sc.nextInt();
        String a = sc.next();

        for(int i = 0; i < n; i++){
            sum += a.charAt(i) - '0';
        }

        System.out.println(sum);
        sc.close();
    }
}
