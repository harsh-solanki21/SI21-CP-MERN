import java.util.Scanner;
 
public class weirdAlgorithm {
 
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
		long n = sc.nextInt();
		sc.close();
 
		recursive(n);
 
	}
 
	static void recursive(long n) {
 
		System.out.print(n + " ");
 
		if (n == 1) 
			return ;
 
		else if (n % 2 == 0) 
			recursive(n /= 2);
 
		else
			recursive((n * 3) + 1);
 
	}
 }
