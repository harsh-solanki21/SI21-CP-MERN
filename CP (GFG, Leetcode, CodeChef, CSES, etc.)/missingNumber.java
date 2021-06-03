import java.util.Scanner;
 
public class missingNumber {
 
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int a[] = new int[n - 1];
		int sum1 = 0;
		int sum2 = 0;
 
		for (int i = 0; i < n - 1; i++) {
			a[i] = sc.nextInt();
		}
 
		sc.close();
 
		for (int i = 0; i < n - 1; i++) {
			sum1 += a[i];
		}
 
		for (int i = 0; i < n; i++) {
			sum2 += i + 1;
		}
 
		System.out.println(sum2 - sum1);
 
	}
 
}
