#include<bits/stdc++.h>
using namespace std;


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int t;
    cin>>t;

    while(t--) {

        int n,k;
        cin>>n>>k;

        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        int ans = 0;
        for(int i=0; i<32; i++) {
            int count = 0;
            for(int j=0; j<n; j++) {
                if(a[j] != 0) {
                    if(a[j] & 1) {
                        count++;
                    }
                    a[j] /= 2;
                }
            }
            ans += ((count + k - 1) / k);
        }
        cout<<ans<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
