import java.util.Scanner;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int min = 1000001, max = -1000001;
        int n = sc.nextInt();
        for(int i = 0 ; i < n ; i++){
            int num = sc.nextInt();
            if(num>max)
                max = num;
            if(num<min)
                min = num;         
        }
        System.out.println(min+" "+max);
    }
}
