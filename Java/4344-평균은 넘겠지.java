import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m, sum;
        float avg;
        
        int n = sc.nextInt();
        for (int i = 0; i < n; i++){
            sum = 0;
            m = sc.nextInt();
            int[] score = new int[m];
            for(int j = 0; j < m; j++){
                int s = sc.nextInt();
                score[j] = s;
                sum += score[j];
            }
            avg = (float)sum/(float)m;
            sum = 0;
            for(int j = 0; j < m; j++){
                if(avg < score[j]){
                sum++;
            }
            }
            avg = (float)sum/(float)m*100;
            System.out.println(String.format("%.3f", avg)+"%");
        }
    }
}
