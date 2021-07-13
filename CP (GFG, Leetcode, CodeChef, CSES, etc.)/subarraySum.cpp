#include<bits/stdc++.h>
using namespace std;


int SubArraySum(int arr[], int n) {

    int result = 0;
    for (int i=0; i <n; i++) {
        int temp = 0;
        for (int j=i; j<n; j++) {
            temp+=arr[j];
            cout<<"temp : "<<temp<<endl;
            result += temp ;
            cout<<"result : "<<result<<endl;
        }
    }
    return result ;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int arr[] = {1, 2, 3} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of SubArray : " << SubArraySum(arr, n) << endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
