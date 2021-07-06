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

    int sum = 0;
    for(int i=2; i<=n; i++) {
        if (i == 1 || i == 0)
            continue;
        if(isPrime(i)) 
            sum += i;
    }
    cout<<sum<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
