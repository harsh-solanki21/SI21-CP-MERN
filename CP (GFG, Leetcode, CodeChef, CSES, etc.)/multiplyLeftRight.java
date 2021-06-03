
    public static int multiply (int a[], int n) {
        
        int half1 = 0;
        int half2 = 0;
        int multi;
    
        for(int i=0; i<n/2; i++) {
            half1 += a[i];
        }
    
        for(int i=n/2; i<n; i++) {
            half2 += a[i];
        }
    
        multi = half1 * half2;
    
        return multi;
    }
    
}
