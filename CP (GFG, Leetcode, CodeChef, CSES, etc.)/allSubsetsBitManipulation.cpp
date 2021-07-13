#include<bits/stdc++.h>
using namespace std;


void subsets(int a[], int n) {
    for(int i=0; i<(1<<n); i++) {
        for(int j=0; j<n; j++) {
            if(i & (1 << j)) {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
}


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[4] = {1,2,3,4};
    subsets(a,4);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
