#include<bits/stdc++.h>
using namespace std;


int updateBit(int n, int position, int value) {
    int mask = ~(1<<position);
    n = n & mask;
    return (n | (value<<position));
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    cout<<updateBit(5,1,1)<<endl;


    #ifdef ONLINE_JUDGE
        cerr<<"Time : "<<1000 * ((int)clock()) / (int)CLOCKS_PER_SEC<<"ms"<<endl;
    #endif

    return 0;

}
