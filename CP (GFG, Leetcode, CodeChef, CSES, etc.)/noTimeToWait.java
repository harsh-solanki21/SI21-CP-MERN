import java.util.Scanner;

public class NoTimeToWait {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		if(sc.hasNextInt()) {
		    
		    int n = sc.nextInt();
		    int h = sc.nextInt();
		    int x = sc.nextInt();
		    
		    int a[] = new int[n];
		    int flag = 0;
		    
		    for(int i=0; i<n; i++) {
		    	a[i] = sc.nextInt();
		    }
		    sc.close();
		    
		    for(int i=0; i<n; i++) {
		    	if(a[i] + x >= h)
		    		flag = 1;
		    }
		    
		    if(flag == 1)
		    	System.out.println("YES");
		    else
		    	System.out.println("NO");
		    
		}
		
	}
	
}
