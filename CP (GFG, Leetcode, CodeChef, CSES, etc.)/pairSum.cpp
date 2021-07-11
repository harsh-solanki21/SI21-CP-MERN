#include<bits/stdc++.h>
using namespace std;


bool pairSum(int a[], int n, int k) {

    for(int i=0; i<n-1; i++) {
        for(int j=1; j<n; j++) {
            if(a[i]+a[j] == k) {
                return true;
            }
        }
    }
    return false;
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    bool result = pairSum(a,n,k);
    if(result)
        cout<<"Pair Sum Found"<<endl;
    else
        cout<<"Pair Sum Not found"<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
