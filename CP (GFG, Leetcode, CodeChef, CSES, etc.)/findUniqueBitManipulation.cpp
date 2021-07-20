#include<bits/stdc++.h>
using namespace std;


int findUnique(int a[], int n, int k) {

    int INT_SIZE = 8 * sizeof(int);
    int count[INT_SIZE];
    memset(count, 0, sizeof(count));
 
    for (int i = 0; i < INT_SIZE; i++) {
        for (int j = 0; j < n; j++) {
            if ((a[j] & (1 << i)) != 0) {
                count[i] += 1;
            }
        }
    }
 
    int res = 0;
    for (int i = 0; i < INT_SIZE; i++) {
        res += (count[i] % k) * (1 << i);
    }
    return res;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[] = { 6, 2, 5, 2, 2, 6, 6 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    cout << findUnique(a, n, k);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
