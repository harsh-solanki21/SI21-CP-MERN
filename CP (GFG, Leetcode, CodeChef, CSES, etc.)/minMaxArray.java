class pair  
{  
    long first, second;  
    public pair(long first, long second)  
    {  
        this.first = first;  
        this.second = second;  
    }  
}

class Compute 
{
    static pair getMinMax(long a[], long n) {
        
        pair minmax = new pair(long pair, pair);
        
        minmax.first = a[0];
        minmax.second = a[0];
        
        for(int i=1; i<n; i++) {
            
            if(a[i] < minmax.first) {
                minmax.first = a[i];
            }
            
            else if(a[i] > minmax.second) {
                minmax.second = a[i];
            }
            
        }
        
        return minmax;
    }
        
}
