import java.util.Scanner;

class repetitions {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		sc.close();
		
		char c[] = s.toCharArray();
		int count = 1;
		int result = 1;
		
		for(int i=1; i<s.length(); i++) {
			
			if(c[i] == c[i-1]) {
				count++;
			}
			else {
				count = 1;
			}
			result = Math.max(result, count);
			
		}
		
		System.out.println(result);
		
	}
}