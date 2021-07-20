#include<bits/stdc++.h>
using namespace std;


void get2NonRepeatingNos(int arr[], int n, int* x, int* y) {

    int Xor = arr[0];
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;
 
    for (i = 1; i < n; i++) {
        Xor ^= arr[i];
    }
 
    set_bit_no = Xor & ~(Xor - 1);
 
    for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no) {
            *x = *x ^ arr[i];
        }
        else {
            *y = *y ^ arr[i];
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
    int n = sizeof(arr) / sizeof(*arr);
    int* x = new int[(sizeof(int))];
    int* y = new int[(sizeof(int))];
    get2NonRepeatingNos(arr, n, x, y);
    cout <<*x<<" "<<*y<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
