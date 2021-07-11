#include<bits/stdc++.h>
using namespace std;




int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(a) / sizeof(a[0]);

    int mx = INT_MIN;
    for(int i=0; i<n-k+1; i++) {
        int sum = 0;
        for(int j=i; j<k+i; j++) {
            sum += a[j];
            cout<<j<<" ";
        }
        cout<<endl;
        mx = max(mx, sum);
    }
    cout<<mx<<endl;
    


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
