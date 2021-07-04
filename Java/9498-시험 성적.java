import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		int a;
		Scanner sc = new Scanner(System.in);
		
		a = sc.nextInt();
		
		if(a < 60){
		    System.out.println("F");
		}
		else if(a < 70){
		    System.out.println("D");
		}
		else if(a < 80){
		    System.out.println("C");
		}
		else if(a < 90){
		    System.out.println("B");
		}
		else{
		    System.out.println("A");
		}
		return;
	}
}
