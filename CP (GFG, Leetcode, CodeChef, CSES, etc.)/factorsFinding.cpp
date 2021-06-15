#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin>>n;
    vector<int> v;
    
    for(int i=1; i<=n; i++) {
        if(n%i == 0) {
            v.push_back(i);
            count++;
        }
    }
    
    cout<<count<<endl;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    return 0;
}
