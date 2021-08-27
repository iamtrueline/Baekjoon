import java.util.*;

class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int ogn = sc.nextInt();
                int cycle = 0, tmp = ogn;
        
        while (true) {
            int a = tmp/10, b = tmp%10, c = a + b;
            int chg = b * 10 + c % 10;
            cycle++;
            if (ogn == chg) {
                break;
            }
            else {
                tmp = chg;
            }
        }
        System.out.println(cycle);
    }
}
