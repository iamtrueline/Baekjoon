import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int big = 0, idx = 0;

        for(int i = 0; i < 9 ; i++){
            int tmp = sc.nextInt();
            if(big < tmp){
                big = tmp;
                idx = i+1;
            }
        }
        System.out.println(big);
        System.out.println(idx);
    }
}
