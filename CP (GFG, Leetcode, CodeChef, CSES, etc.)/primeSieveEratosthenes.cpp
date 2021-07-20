#include<bits/stdc++.h>
using namespace std;


void primeSieve(int n) {

    int prime[100] = {0};
    for(int i=2; i<=n; i++) {
        if(prime[i] == 0) {
            for(int j=i*i; j<=n; j+=i) {
                prime[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++) {
        if(prime[i] == 0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;

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

    primeSieve(n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
