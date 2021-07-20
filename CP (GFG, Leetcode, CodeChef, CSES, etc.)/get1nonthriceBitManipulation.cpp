#include<bits/stdc++.h>
using namespace std;


bool getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

int setBit( int n, int pos) {
    return (n | (1 << pos));
}

int unique(int arr[], int n) {

    int result = 0;
    for (int i = 0; i < 64; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (getBit(arr[j], i)) {
                sum++;
            }
        }
        if (sum % 3 != 0) {
            result = setBit(result, i);
        }
    }
    return result;

}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    cout << unique(a, n) << endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
