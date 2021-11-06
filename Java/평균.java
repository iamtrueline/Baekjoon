import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double all = 0, max = 0;
        int n = sc.nextInt();
        double score[] = new double[n];

        for(int i = 0; i < n; i++){
            score[i] = sc.nextInt();
            if(max < score[i]){
                max = score[i];
            }
        }

        for(int i = 0; i < n; i++){
            all += score[i]/max*100;
        }
        System.out.println(all/(double)n);
    }
}
