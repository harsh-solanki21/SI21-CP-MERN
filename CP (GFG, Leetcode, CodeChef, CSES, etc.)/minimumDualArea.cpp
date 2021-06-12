#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	
	while(t--) {
	    
	    int n;
	    cin>>n;
	    
	    vector<pair<int,int>> x;
	    vector<pair<int,int>> y;
	    multiset<int> X;
	    multiset<int> Y;
	    
	    for(int i=0; i<n; ++i) {
	        
	        int a,b;
	        cin>>a>>b;
	        
	        x.push_back({a,b});
	        y.push_back({a,b});
	        X.insert(a);
	        Y.insert(b);
	        
	    }
	    
	    sort(x.begin(), x.end());
	    sort(y.begin(), y.end());
	    int h1=0;
	    int h2=0;
	    int h1max=0;
	    int h1min=LONG_MAX;
	    int area=LONG_MAX;
	    
	    for(int i=0; i<n-1; ++i) {
	        
	        h1max = max(h1max, x[i].second);
	        h1min = min(h1min, x[i].second);
	        h1=h1max-h1min;
	        auto it=Y.find(x[i].second);
	        Y.erase(it);
	        h2=*Y.rbegin() - *Y.begin();
	        int newArea = ((x[i].first - x[0].first) * h1) + ((x[n-1].first - x[i+1].first) * h2);
	        area = min(area,newArea);
	        
	    }
	    
	    
	    int w1=0;
	    int w2=0;
	    int w1max=0;
	    int w1min=LONG_MAX;
	    
	    for(int i=0; i<n-1; ++i) {
	        
	        w1max = max(w1max, y[i].second);
	        w1min = min(w1min, y[i].second);
	        w1=w1max-w1min;
	        auto it=X.find(y[i].second);
	        X.erase(it);
	        w2=*X.rbegin() - *X.begin();
	        int newArea = ((y[i].first - y[0].first) * w1) + ((y[n-1].first - y[i+1].first) * w2);
	        area = min(area,newArea);
	        
	    }
	    
	    if(area == LONG_MAX) {
	        area = 0;
	    }
	    cout<<area<<endl;
	    
	}
	
	return 0;
}
