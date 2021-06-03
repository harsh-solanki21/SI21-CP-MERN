
class Main {

	public static void main(String[] args) {

		int a[] = { 9, 5, 1, 2, 3, 6, 8, 7, 4, 11 };
		int sum[] = new int[a.length/2];
		
		for(int i=0,j=0; i<a.length-1; i+=2,j++) {
			sum[j] = a[i] * a[i+1];
		}

		for(int i=0; i<sum.length; i++) {
			System.out.print(sum[i] + " ");
		}
		
	}
}