#include<bits/stdc++.h>
using namespace std;
#define int long long int


void printFirstRepeating(int arr[], int n) {

    int k = 0;
    int max = n;
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
 
    int a[max + 1] = {};
    int b[max + 1] = {};
 
    for (int i = 0; i < n; i++) {
        if (a[arr[i]]) {
            b[arr[i]] = 1;
            k = 1;
            continue;
        }
        else
            a[arr[i]] = i;
    }
 
    if (k == 0)
        cout << "No repeating element found" << endl;
    else {
        int min = max + 1;
        for (int i = 0; i < max + 1; i++) {
            if (a[i] && min > a[i] && b[i]) {
                min = a[i];
            }
        }
        cout << arr[min];
    }
    cout << endl;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
