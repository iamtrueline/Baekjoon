import java.util.Scanner;

public class Main{
    public static int ishan(int n){
        int temp1, temp2;
        
        if(n < 100){
            return 1;
        }
        else if(n == 1000){
            return 0;
        }
        else{
            temp1 = (n%100)/10 - n/100;
            temp2 = n%10 - (n%100)/10;
            if(temp1 == temp2)
                return 1;
            else
                return 0;
        }
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = 0;
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            if(ishan(i+1)==1)
                num++;
        }
        System.out.println(num);
    }
}
