#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        
        string s;
        cin>>s;
        string a,b;
        int n = s.size();
        
        for(int i=0; i<n/2; i++) {
            a += s[i];
            b += s[n-i-1];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        cout<<(a == b ? "YES" : "NO")<<endl;
        
    }
    
    return 0;
}
