#include<bits/stdc++.h>
using namespace std;




int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[] = {-1,4,-6,7,-4};
    int n = sizeof(a) / sizeof(a[0]);

    int sum = 0, mx = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
        if(sum < 0) 
            sum = 0;
        else
            mx = max(mx,sum);
    }
    cout<<mx<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
