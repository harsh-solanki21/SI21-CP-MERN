#include<bits/stdc++.h>
using namespace std;


int setBit(int n, int position) {
    return ((n & (1 << position)) != 0);
}

void unique(int a[], int n) {

    int xorsum = 0;
    for(int i=0; i<n; i++) {
        xorsum = xorsum ^ a[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int position = 0;
    while(setbit != 1) {
        setbit = xorsum & 1;
        position++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i=0; i<n; i++) {
        if(setBit(a[i], position-1)) {
            newxor = newxor ^ a[i];
        }
    }

    cout<<newxor<<" "<<(tempxor ^ newxor)<<endl;

}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int a[] = {1,2,3,1,2,3,5,7};
    int n = sizeof(a) / sizeof(a[0]);
    unique(a,n);


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
