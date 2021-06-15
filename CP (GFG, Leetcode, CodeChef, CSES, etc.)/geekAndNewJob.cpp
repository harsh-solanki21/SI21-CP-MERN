#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        
        string s;
        cin>>s;
        int number = 0, upper = 0, lower = 0;
    
        for(int i=0; i<s.size(); i++) {
            
            if(s[i] >= '0' && s[i] <= '9')
                number++;
            else if(s[i] >= 'A' && s[i] <= 'Z')\
                upper++;
            else if(s[i] >= 'a' && s[i] <= 'z')
                lower++;
        }
        
        if(number > 0 && upper > 0 && lower > 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    
    }
    
    return 0;
}