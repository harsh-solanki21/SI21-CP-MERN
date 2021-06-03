class GFG {

    String longest(String names[], int n) {
        
        int len = names[0].length();
        String s = names[0];
        
        for(int i=1; i<n; i++) {
            
            if(len < names[i].length()) {
                len = names[i].length();
                s = names[i];
            }
            
        }
        
        return s;
        
    }
}
