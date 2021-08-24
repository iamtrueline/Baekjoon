import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        while(a!=0 && b!=0){
            int sum = a+b;
            System.out.println(sum);
            a = sc.nextInt();
            b = sc.nextInt();
        }
    }
}
