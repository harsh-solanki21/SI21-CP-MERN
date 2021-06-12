#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    
	    int n,m;
	    cin>>n>>m;
	    
	    int a[n],b[m];
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++) {
	        cin>>b[i];
	    }
	    
	    vector<int> v1,v2;
	    int x=-1, y=-1;
	    int max = 1e9;
	    
	    for(int i=0;i<n;i++) {
	        
	        if(a[i]==1) {
	            v1.push_back(0);
	            x=i;
	        }
	        else if(x==-1) {
	            v1.push_back(max);
	        }
	        else if(a[i]==2) {
	            v1.push_back(0);
	        }
	        else {
	            v1.push_back(i-x);
	        }
	        
	    }
	    
	    for(int i=n-1;i>=0;i--) {
	        
	        if(a[i]==2) {
	            v2.push_back(0);
	            y=i;
	        }
	        else if(y==-1 && a[i]==0) {
	            v2.push_back(max);
	        }
	        else if(a[i]==1) {
	            v2.push_back(0);
	        }
	        else {
	            v2.push_back(y-i);
	        }
	        
	    }
	    
	    reverse(v2.begin(), v2.end());
	    
	    for(int i=0; i<m; i++) {
	        
	        int current = b[i];
	        if(a[0] != 0 && a[current-1] != 0) {
	            cout<<"0"<<" ";
	        }
	        else if(current == 1) {
	            cout<<"0"<<" ";
	        }
	        else {
	            int ans = 0;
	            if(v1[current-1]==max && v2[current-1]==max) {
	                ans = -1;
	            }
	            else {
	                ans = min(v1[current-1], v2[current-1]);
	            }
	            cout<<ans<<" ";
	        }
	        
	    }
	    cout<<endl;
	    
	}
	
	return 0;
}
