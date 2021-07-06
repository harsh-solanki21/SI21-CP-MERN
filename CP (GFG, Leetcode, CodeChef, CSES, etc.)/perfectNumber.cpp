#include<bits/stdc++.h>
using namespace std;
#define int long long int

int perfectNumber(int n) {
   int count = 0;
   for(int i=1; i<n; i++) {
        if(n%i == 0)
            count += i;
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

        int result = perfectNumber(n);

        if(result == n)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((double)clock()) / (double)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
