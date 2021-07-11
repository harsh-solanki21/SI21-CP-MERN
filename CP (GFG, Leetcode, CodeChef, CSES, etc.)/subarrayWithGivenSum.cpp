#include<bits/stdc++.h>
using namespace std;
#define int long long int


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum += a[j];
            if(sum == s) {
                cout<<i<<" "<<j<<endl;
                exit(0);
            }
        }
    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
