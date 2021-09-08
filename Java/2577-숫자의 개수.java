import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int [] num = new int [10];

        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int i = a*b*c;
        
        while(i >0){
            num[i%10]++;
            i /= 10;
        }

        for(i = 0; i < num.length; i++){
            System.out.println(num[i]);
        }
    }
}
