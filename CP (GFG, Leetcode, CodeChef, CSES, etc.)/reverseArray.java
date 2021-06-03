
class Main {

	public static void main(String[] args) {

		int a[] = { 5, 8, 7, 4, 6, 9, 3, 0, 1, 2, 1, 2, 54 };
		
		System.out.println("Input Array");
		display(a);
		
		reverse(a);
		
		System.out.println("\nReversed Array");
		display(a);

	}
	
	static void display(int a[]) {
		
		for(int i=0; i<a.length; i++) {
			System.out.print(a[i] + " ");
		}
		
	}
	
	static void reverse(int a[]) {
		
		int first = 0;
		int last = a.length-1;
		
		while(first < last) {
			
			int temp = a[first];
			a[first] = a[last];
			a[last] = temp;
			first++;
			last--;
			
		}
		
	}

}