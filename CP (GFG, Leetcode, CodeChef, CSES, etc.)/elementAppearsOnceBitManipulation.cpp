#include<bits/stdc++.h>
using namespace std;


int findSingle(int a[], int size) {
    int res = a[0];
    for (int i = 1; i < size; i++) {
        res = res ^ a[i];
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


    int a[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    cout << findSingle(a, n) << endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
