package squarerooting;
import java.util.Scanner;
import java.lang.Math;
public class Squaring {
	public static void main(String[] args){
		int n;
		Scanner input= new Scanner (System.in);
		System.out.println("enter A number to find its Square Root");
		n=input.nextInt();
		System.out.println("the square root is  " + Math.sqrt(n));
	}

}
