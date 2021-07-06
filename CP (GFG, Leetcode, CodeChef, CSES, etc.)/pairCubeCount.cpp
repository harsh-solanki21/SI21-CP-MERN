#include<bits/stdc++.h>
using namespace std;
#define int long long int

int pairCubeCount(int n) {
   int count = 0;
   for(int i=0; i<=cbrt(n); i++) {
        for(int j=1; j<=cbrt(n); j++) {
            if((pow(i,3) + pow(j,3)) == n)
                count++;
        }
   }
   return count;
}

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

        int n;
        cin>>n;

        cout<<pairCubeCount(n)<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
