#include<bits/stdc++.h>
using namespace std;


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n;
    cin>>n;

    int a[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
