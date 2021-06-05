/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		for(int i=0; i<n; i++) {
		    
		    int a[] = new int[4];
		    for(int j=0; j<4; j++) {
		        a[j] = sc.nextInt();
		    }
		    
		    int ax = a[2] / a[0];
		    int bx = a[3] / a[1];
		    
		    int sum = ax + bx;
		    System.out.println(sum);
		    
		}
		
	}
}
