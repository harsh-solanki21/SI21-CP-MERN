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

    int sum = 0;
    for(int i=0; i<k; i++)
        sum += a[i];

    int windowSum = sum;
    for(int i=k; i<n; i++) {
        windowSum += a[i] - a[i-k];
        sum = max(sum, windowSum);
    }
    cout<<sum<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
