#include<bits/stdc++.h>
using namespace std;
#define int long long int


void printFirstRepeating(int arr[], int n) {

    int min = -1;
    set<int> myset;
 
    for (int i = n - 1; i >= 0; i--) {
        if (myset.find(arr[i]) != myset.end())
            min = i;
        else
            myset.insert(arr[i]);
    }
 
    if (min != -1)
        cout << "The first repeating element is " << arr[min];
    else
        cout << "There are no repeating elements";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int arr[] = {10, 5, 3, 4, 3, 5, 6};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
