package largeroftwo;
import java.util.Scanner;
public class Largeroftwo {
public static void main(String[] args){
	int a;
	int b;
	Scanner input= new Scanner(System.in);
	
	System.out.println ("enter number 1");
	a=input.nextInt();
	System.out.println ("enter number 2");
	b=input.nextInt();
	
	if (a>b) {
		System.out.println (a + "  is larger");
	}
	else {
		System.out.println (b + "  is larger");
	}
}
}
