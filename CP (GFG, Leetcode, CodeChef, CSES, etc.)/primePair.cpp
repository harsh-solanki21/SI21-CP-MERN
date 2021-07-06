#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) 
            return false;
    }
    return true;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin>>n;

    vector<int> v;
    for(int i=2; i<=n; i++) {
        if(isPrime(i)) 
            v.push_back(i);
    }
    
    for(int i=0; i<v.size(); i++) {
        for(int j=0; j<v.size(); j++) {
            if(v[i]*v[j] <= n)
                cout<<v[i]<<" "<<v[j]<<" ";
        }
    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
