#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    
    ll n;
    cin>>n;
    
    ll a[n];
    ll result[n];
    ll maxx = INT_MIN;
    
    for(ll i=0; i<n; i++) {
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    for(ll i=0; i<n; i++) {
        result[i] = a[i] * (n-i);
        if(maxx < result[i])
            maxx = result[i];
    }
    
    cout<<maxx<<endl;
    
    return 0;
}
