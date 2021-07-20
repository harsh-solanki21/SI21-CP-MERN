#include<bits/stdc++.h>
using namespace std;


void get2NonRepeatingNos(int arr[], int n) {
 
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        m[arr[i]]++;
    }
 
    for (auto& x : m) {
        if (x.second == 1) {
            cout << x.first << " ";
        }
    }
    
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    get2NonRepeatingNos(arr, n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
